# CMake Sample

A sample project with CMake

## Build

```sh
cmake -S . -B build -G <generator> -DCMAKE_BUILD_TYPE=<Debug|Release>
cmake --build . --target MainApp
```

## Test

```sh
ctest
```

## Building Docs

```sh
# Configure
cmake --build . --target docs
```
