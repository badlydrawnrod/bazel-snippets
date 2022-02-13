# Bazel snippets
Playing around with Bazel. Definitely a work in progress.

## Building

```
$ bazel build //...
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
