load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

# See: https://google.github.io/googletest/quickstart-bazel.html (and then follow the advice to live at head)
http_archive(
    name = "com_google_googletest",
    strip_prefix = "googletest-main",
    urls = [
        "https://github.com/google/googletest/archive/refs/heads/main.zip",
    ],
)

# Raylib.
http_archive(
    name = "raylib",
    build_file = "//raylib:raylib.BUILD",
    strip_prefix = "raylib-4.0.0_win64_msvc16",
    url = "https://github.com/raysan5/raylib/releases/download/4.0.0/raylib-4.0.0_win64_msvc16.zip",
)
