load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

# Download GoogleTest. This is a bazel project itself, so it will be built with bazel.
# See: https://google.github.io/googletest/quickstart-bazel.html (and then follow the advice to live at head).
http_archive(
    name = "com_google_googletest",
    strip_prefix = "googletest-main",
    urls = [
        "https://github.com/google/googletest/archive/refs/heads/main.zip",
    ],
)

# Download a pre-compiled version of Raylib (x64 Windows). See //thirdparty/raylib.BUILD.
http_archive(
    name = "raylib",
    build_file = "//thirdparty:raylib.BUILD",
    sha256 = "abd6963c3227fa46a22e2743f9a72e176ce19fb46974a702cc16ec96f4dee0e4",
    strip_prefix = "raylib-4.0.0_win64_msvc16",
    url = "https://github.com/raysan5/raylib/releases/download/4.0.0/raylib-4.0.0_win64_msvc16.zip",
)
