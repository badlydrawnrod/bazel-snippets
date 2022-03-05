cc_import(
    name = "raylib_windows",
    hdrs = ["include/raylib.h"],
    interface_library = "lib/raylibdll.lib",
    shared_library = "lib/raylib.dll",
)

cc_library(
    name = "raylib",
    includes = ["include"],
    visibility = ["//visibility:public"],
    deps = ["raylib_windows"],
)
