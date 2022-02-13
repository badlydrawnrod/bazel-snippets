# See: https://google.github.io/googletest/quickstart-bazel.html

cc_test(
    name = "dogtest",
    size = "small",
    srcs = ["dogtest.cpp"],
    deps = [
        "//doglib",
        "@com_google_googletest//:gtest_main",
    ],
)
