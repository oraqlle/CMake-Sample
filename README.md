# CMake Sample

A sample project with CMake

## Configure

```sh
# Must run first
cmake -S . -B build -G <generator> -DCMAKE_BUILD_TYPE=<Debug|Release>
```

## Build Main Executable

```sh
cmake --build . --target MainApp
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
