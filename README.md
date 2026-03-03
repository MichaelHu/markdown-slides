# markdown-slides

一个支持创建类似 reveal.js 风格幻灯片的 Markdown 解析器。

## 项目简介

markdown-slides 是一个用 C 语言编写的 Markdown 解析器，专为创建幻灯片而设计。它不仅支持标准 Markdown 语法，还提供了扩展功能以支持幻灯片制作。

## 主要功能

- 解析 Markdown 文件并转换为 HTML
- 支持创建幻灯片（通过 @s 和 @vs 标记）
- 支持标准 Markdown 语法（标题、列表、代码块、引用等）
- 支持 HTML 块、脚本块、样式块和 SVG 块
- 支持表格
- 支持强调、加粗等内联元素
- 支持链接和图片
- 支持代码高亮（通过 ``` 标记）

## 目录结构

```
├── dist/            # 编译后的可执行文件，支持不同操作系统
│   ├── mac/         # macOS 版本
│   ├── unix/        # Unix 版本
│   ├── win/         # Windows 32位版本
│   └── win-64/      # Windows 64位版本
├── src/             # 源代码目录
│   ├── Makefile     # 构建脚本
│   ├── main.c       # 程序入口
│   ├── markdown.lex # 词法分析器定义
│   ├── markdown.y   # 语法分析器定义
│   └── ...          # 其他辅助文件
├── test/            # 测试文件
├── test-md/         # 测试用的 Markdown 文件和生成的 HTML
│   ├── img/         # 测试图片
│   ├── lib/         # 第三方库（如 reveal.js）
│   └── tpl/         # HTML 模板
├── LICENSE          # 许可证文件
└── README.md        # 项目说明
```

## 安装和使用

### 编译项目

1. 进入 src 目录：
   ```bash
   cd src
   ```

2. 编译项目：
   ```bash
   make
   ```

3. 编译完成后，可执行文件会生成在 src 目录中。

### 使用方法

```bash
# 基本用法
./markdown input.md

# 使用 dist 目录中的可执行文件
./dist/mac/markdown input.md  # macOS
./dist/unix/markdown input.md # Unix
./dist/win/markdown.exe input.md # Windows
```

## 幻灯片创建

### 水平幻灯片

使用 `@s` 标记创建新的水平幻灯片：

```markdown
# 演示文稿

@s

## 第一页

这是第一页内容。

@s

## 第二页

这是第二页内容。
```

### 垂直幻灯片

使用 `@vs` 标记创建新的垂直幻灯片：

```markdown
# 演示文稿

@s

## 第一页

这是第一页内容。

@vs

### 第一页子页

这是第一页的子页内容。

@s

## 第二页

这是第二页内容。
```

## 技术栈

- **C**：编程语言
- **flex**：词法分析器生成器
- **bison**：语法分析器生成器
- **Make**：构建工具
- **reveal.js**：幻灯片展示框架（第三方库）

## 许可证

本项目使用 MIT 许可证。

## 贡献

欢迎提交 issue 和 pull request 来帮助改进这个项目。

## 联系方式

- GitHub：https://github.com/MichaelHu/markdown-slides
