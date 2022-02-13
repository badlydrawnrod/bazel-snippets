# Builds a python executable named "catuser". It depends on "cat" which is in a different Bazel package.

py_binary(
    name = "catuser",
    srcs = ["catuser.py"],
    data = ["//cat"],  # We need this cc_binary at runtime.
    main = "catuser.py",  # Optional. Uses 'name' if not specified.
)
