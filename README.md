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
