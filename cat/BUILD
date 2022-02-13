# Builds an executable named "cat".
cc_binary(
    name = "cat",
    srcs = ["cat.cpp"],
    visibility = ["//visibility:public"],
    deps = ["//catlib"],
)

# Builds a python executable named "runcat". It depends on "cat", because it needs to run it.
py_binary(
    name = "runcat",
    srcs = ["runcat.py"],
    data = [":cat"],  # We need this cc_binary at runtime.
)
