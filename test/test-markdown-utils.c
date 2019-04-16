#include <stddef.h>
#include "../src/markdown-utils.h"
#include "test-lib/test-utils.h"

static void test_markdown_get_standard_link_tag_info(void) {
    test_util_log_str("\n# test_markdown_get_standard_link_tag_info");

    /**
     * 1. link: [an example](http://example.com/ "Title")
     *      attr: href="http://example.com/" title="Title"
     *      content: an example
     */
    test_util_str_equal(
        "test 1"
        , markdown_get_standard_link_tag_info("an example", "http://example.com/ \"Title\"")->content
        , "an example"
    );

    test_util_str_equal(
        "test 2"
        , markdown_get_standard_link_tag_info("an example", "http://example.com/ \"Title\"")->attr
        , " href=\"http://example.com/\" title=\"Title\""
    );

    test_util_str_equal(
        "test 3: title with no double quotes surrounded"
        , markdown_get_standard_link_tag_info("an example", "http://example.com/ Title")->attr
        , " href=\"http://example.com/\" title=\"Title\""
    );

    test_util_str_equal(
        "test 4: content with leading spaces"
        , markdown_get_standard_link_tag_info("    an example", "http://example.com/ Title")->content
        , "an example"
    );

    test_util_str_equal(
        "test 5: href with leading spaces"
        , markdown_get_standard_link_tag_info("    an example", "      http://example.com/ Title")->attr
        , " href=\"http://example.com/\" title=\"Title\""
    );

    test_util_str_equal(
        "test 6: href with trialing spaces"
        , markdown_get_standard_link_tag_info("    an example", "      http://example.com/       Title")->attr
        , " href=\"http://example.com/\" title=\"Title\""
    );

    test_util_str_equal(
        "test 7: no title"
        , markdown_get_standard_link_tag_info("    an example", "      http://example.com/       ")->attr
        , " href=\"http://example.com/\" title=\"an example\""
    );

    test_util_str_equal(
        "test 8: empty attr"
        , markdown_get_standard_link_tag_info("    an example", "")->attr
        , " href=\"\" title=\"an example\""
    );

    test_util_str_equal(
        "test 9: empty content"
        , markdown_get_standard_link_tag_info("", "")->content
        , ""
    );

    test_util_str_equal(
        "test 10: title seperated by spaces"
        , markdown_get_standard_link_tag_info("    an example", "      http://example.com/       Hello, world" )->attr
        , " href=\"http://example.com/\" title=\"Hello, world\""
    );

};



static void test_markdown_get_standard_image_tag_info(void) {
    test_util_log_str("\n# test_markdown_get_standard_image_tag_info");

    /**
     * 1. image: ![Alt text](/path/to/img.jpg "optional title")
     *      attr: src="/path/to/img.jpg" title="optional title" alt="Alt text"
     *      content: 
     */
    test_util_str_equal(
        "test 1"
        , markdown_get_standard_image_tag_info("Alt text", "/path/to/img.jpg \"optional title\"")->content
        , ""
    );

    test_util_str_equal(
        "test 2"
        , markdown_get_standard_image_tag_info("Alt text", "/path/to/img.jpg \"optional title\"")->attr
        , " src=\"/path/to/img.jpg\" title=\"optional title\" alt=\"Alt text\""
    );

    test_util_str_equal(
        "test 3: title with no double quotes surrounded"
        , markdown_get_standard_image_tag_info("Alt text", "/path/to/img.jpg optional title")->attr
        , " src=\"/path/to/img.jpg\" title=\"optional title\" alt=\"Alt text\""
    );

    test_util_str_equal(
        "test 4: content with leading spaces"
        , markdown_get_standard_image_tag_info("    Alt text", "/path/to/img.jpg optional title")->attr
        , " src=\"/path/to/img.jpg\" title=\"optional title\" alt=\"Alt text\""
    );

    test_util_str_equal(
        "test 5: href with leading spaces"
        , markdown_get_standard_image_tag_info("    Alt text", "      /path/to/img.jpg optional title")->attr
        , " src=\"/path/to/img.jpg\" title=\"optional title\" alt=\"Alt text\""
    );

    test_util_str_equal(
        "test 6: href with trialing spaces"
        , markdown_get_standard_image_tag_info("    Alt text", "      /path/to/img.jpg       optional title")->attr
        , " src=\"/path/to/img.jpg\" title=\"optional title\" alt=\"Alt text\""
    );

    test_util_str_equal(
        "test 7: no title"
        , markdown_get_standard_image_tag_info("    Alt text", "      /path/to/img.jpg       ")->attr
        , " src=\"/path/to/img.jpg\" title=\"Alt text\" alt=\"Alt text\""
    );

    test_util_str_equal(
        "test 8: empty attr"
        , markdown_get_standard_image_tag_info("    Alt text", "")->attr
        , " src=\"\" title=\"Alt text\" alt=\"Alt text\""
    );

    test_util_str_equal(
        "test 9: empty content"
        , markdown_get_standard_image_tag_info("", "")->content
        , ""
    );

    test_util_str_equal(
        "test 10: title seperated by spaces"
        , markdown_get_standard_image_tag_info("    Alt text", "      /path/to/img.jpg       Hello, world" )->attr
        , " src=\"/path/to/img.jpg\" title=\"Hello, world\" alt=\"Alt text\""
    );

};

static void test_markdown_get_tag_info(void) {
    test_util_log_str("\n# test_markdown_get_tag_info");

    test_util_str_equal(
        "test 1"
        , markdown_get_tag_info("abc")->content
        , "abc"
    );

    test_util_str_equal(
        "test 2"
        , markdown_get_tag_info("@[]abc")->content
        , "abc"
    );

    test_util_str_equal(
        "test 3"
        , markdown_get_tag_info("@[]abc")->attr
        , ""
    );

    test_util_str_equal(
        "test 4"
        , markdown_get_tag_info("@[data-title=\"def\"]abc")->attr
        , " data-title=\"def\""
    );

    test_util_str_equal(
        "test 5"
        , markdown_get_tag_info("@[data-title=\"def\\]\"]abc")->attr
        , ""
    );

    test_util_str_equal(
        "test 6"
        , markdown_get_tag_info("@[data-title=\"def\\]\"]abc")->content
        , "@[data-title=\"def\\]\"]abc"
    );

}

void test_markdown_utils(void) {
    test_markdown_get_standard_link_tag_info(); 
    test_markdown_get_standard_image_tag_info(); 
    test_markdown_get_tag_info(); 
}
