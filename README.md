# Bazel snippets
Playing around with Bazel. Definitely a work in progress.

## Building

```
$ bazel build //...
```

To show the commands use `-s` or `--subcommands`, or `--subcommmands=pretty_print` if you want to see the arguments as a list.


To show commands only when there's a failure use `--verbose_failures`.
```
$ bazel build //... --verbose_failures
```

To select a configuration from `.bazelrc`, use `--config`.
```
$ bazel build //... --config=static_dbg
```

## Running tests

### Quiet
```
$ bazel test //...
```

### Verbose
```
$ bazel test //... --test_output=all
```

## Running
### Bazel
```
$ bazel run //cat
$ bazel run //cat:runcat
$ bazel run //catuser
$ bazel run //dog
$ bazel run //dogcpp
```

### Linux
```
$ bazel-bin/cat/cat
$ bazel-bin/cat/runcat
$ bazel-bin/catuser/catuser
$ bazel-bin/dog/dog
$ bazel-bin/dogcpp/dogcpp
```

### Windows
```
C:> bazel-bin\cat\cat.exe
C:> bazel-bin\cat\runcat.exe
C:> bazel-bin\catuser\catuser.exe
C:> bazel-bin\dog\dog.exe
C:> bazel-bin\dogcpp\dogcpp.exe
```

# Packages

## cat
A simple C++ program that displays a greeting from a cat. It has no dependencies.

### Targets:
- **cat** - uses `cc_binary()` to build "cat" - `bazel run //cat`
- **runcat** - uses `py_binary()` to run "cat" from a Python binary - `bazel run //cat:runcat`

## catlib
A C++ library containing a `Cat` class. It has no dependencies.

### Targets:
- **catlib** uses `cc_library()` - `bazel build //catlib`


## cattest
Unit tests for `catlib`. It depends on `catlib` and GoogleTest.

### Targets
- **cattest** - uses `cc_test()` - `bazel test //cattest`

## catuser
A python binary that depends on another package. It depends on `cat`.

### Targets
- **catuser** - uses `py_binary()` - `bazel run //catuser`

## dog
A C program that demonstrates using a library from another package in the same workspace. It depends on `doglib`.

### Targets
- **dog** - uses `cc_binary` - `bazel run //dog`

## doglib
A C library contains some functions. It has no dependencies.

### Targets
- ***doglib** - uses `cc_library()` - `bazel build //doglib`

## dogtest
Unit tests for `doglib`. It depends on `doglib` and GoogleTest.

### Targets
- **dogtest** - uses `cc_test()` - `bazel test //dogtest`

## raylib_demo
A C program that creates a window using a pre-built version of Raylib. It depends on `@raylib`.

### Targets
- **hello_world** - uses `cc_binary()` - `bazel run //raylib_demo:hello_world`

## thirdparty
Third party libraries that aren't built with Bazel.

### Targets
- **@raylib** - uses `cc_library()` and `cc_import`(). Look at `raylib.BUILD` to see how it defines `@raylib`.

