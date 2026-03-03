#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <sys/stat.h>
#include "test-lib/test-utils.h"

#define MAX_FILENAME_LENGTH 256
#define MAX_FILE_CONTENT 1048576 // 1MB

static char *read_file(const char *path) {
    FILE *file = fopen(path, "r");
    if (!file) {
        return NULL;
    }
    
    // 获取文件大小
    fseek(file, 0, SEEK_END);
    long file_size = ftell(file);
    fseek(file, 0, SEEK_SET);
    
    if (file_size > MAX_FILE_CONTENT) {
        fclose(file);
        return NULL;
    }
    
    char *content = (char *)malloc(file_size + 1);
    if (!content) {
        fclose(file);
        return NULL;
    }
    
    fread(content, 1, file_size, file);
    content[file_size] = '\0';
    
    fclose(file);
    return content;
}

static int run_markdown_parser(const char *input_file, char **output) {
    char command[MAX_FILENAME_LENGTH * 2 + 32];
    snprintf(command, sizeof(command), "../src/markdown %s", input_file);
    
    FILE *pipe = popen(command, "r");
    if (!pipe) {
        return -1;
    }
    
    char buffer[MAX_FILE_CONTENT];
    size_t bytes_read = fread(buffer, 1, MAX_FILE_CONTENT - 1, pipe);
    buffer[bytes_read] = '\0';
    
    pclose(pipe);
    
    *output = strdup(buffer);
    return 0;
}

static void test_markdown_file(const char *md_file, const char *html_file) {
    char md_path[MAX_FILENAME_LENGTH];
    char html_path[MAX_FILENAME_LENGTH];
    
    snprintf(md_path, sizeof(md_path), "../test-md/%s", md_file);
    snprintf(html_path, sizeof(html_path), "../test-md/%s", html_file);
    
    // 读取预期的 HTML 输出
    char *expected = read_file(html_path);
    if (!expected) {
        test_util_log_str("\n# 错误: 无法读取预期的 HTML 文件");
        return;
    }
    
    // 运行 Markdown 解析器
    char *actual = NULL;
    if (run_markdown_parser(md_path, &actual) != 0) {
        test_util_log_str("\n# 错误: 无法运行 Markdown 解析器");
        free(expected);
        return;
    }
    
    // 比较实际输出和预期输出
    test_util_str_equal(md_file, actual, expected);
    
    // 清理
    free(expected);
    free(actual);
}

static void test_all_markdown_files(void) {
    DIR *dir = opendir("../test-md");
    if (!dir) {
        test_util_log_str("\n# 错误: 无法打开 test-md 目录");
        return;
    }
    
    struct dirent *entry;
    while ((entry = readdir(dir)) != NULL) {
        if (entry->d_type == DT_REG) {
            // 检查是否是 .md 文件
            char *ext = strrchr(entry->d_name, '.');
            if (ext && strcmp(ext, ".md") == 0) {
                // 构建对应的 .md.html 文件名
                char html_filename[MAX_FILENAME_LENGTH];
                snprintf(html_filename, sizeof(html_filename), "%s.html", entry->d_name);
                
                // 检查对应的 .md.html 文件是否存在
                char html_path[MAX_FILENAME_LENGTH];
                snprintf(html_path, sizeof(html_path), "../test-md/%s", html_filename);
                
                struct stat st;
                if (stat(html_path, &st) == 0) {
                    // 测试这个 Markdown 文件
                    test_markdown_file(entry->d_name, html_filename);
                }
            }
        }
    }
    
    closedir(dir);
}

void test_markdown_parser(void) {
    test_util_log_str("\n# 测试 Markdown 解析器");
    test_all_markdown_files();
}
