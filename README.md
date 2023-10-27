# CMake Sample

A sample project with CMake

## Configure

```sh
# Must run first
cmake -S . -B build -G <generator> -DCMAKE_BUILD_TYPE=<Debug|Release>
```

> Note: For Visual Studio builds, the architecture must be specified as well using the `-A` flag. Valid architecture names are:
>
> - Win32 - 32-bit x86 build
> - x64 - 64-bit x86 build
> - ARM - 32-bit ARM build
> - ARM64 - 64-bit ARM build
>
> The debug, release etc. configs are chosen at the build step, not with `-DCMAKE_BUILD_TYPE` flag (see below).

## Build Main Executable

```sh
cmake --build . --target MainApp # --config <Debug|Release> for multiconfig options eg. Visual Studio
```

## Test

```sh
# Build all
cmake --build .

# Then run tests directly
ctest --test-dir build

# Or ...

# Build and run tests
cmake --build . --target test
```
<!-- # Or ...

# Configure, rebuild and run tests

ctest --build-and-test . build --build-generator <generator> -DCMAKE_BUILD_TYPE=<Debug|Release>
``` -->

## Building Docs

```sh
cmake --build . --target docs
```

## Basic Clang Tidy

```sh
clang-tidy -p "build" -config-file=".clang-tidy" "./**/*.hxx" "./**/*.cxx"
```
