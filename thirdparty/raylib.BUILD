cc_import(
    name = "raylib_windows",
    interface_library = "lib/raylibdll.lib",
    shared_library = "lib/raylib.dll",
)

cc_library(
    name = "raylib",
    hdrs = glob(["include/*.h"]),
    includes = ["include"],
    visibility = ["//visibility:public"],
    deps = ["raylib_windows"],
)
