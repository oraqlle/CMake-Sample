# Note that headers are optional, and do not affect add_library, but they will not
# show up in IDEs unless they are listed in add_library.

# Use Glob, but only for CMake 3.12 or later:
file(GLOB HEADER_LIST CONFIGURE_DEPENDS "${CMakeSample_SOURCE_DIR}/include/utils/*.hxx")

# Make an automatic library - will be static or dynamic based on user setting
add_library(utils repeat.cxx bye_world.cxx print.cxx ${HEADER_LIST})

# We need this directory, and users of our library will need it too
target_include_directories(utils PUBLIC "${CMakeSample_SOURCE_DIR}/include")

target_link_libraries(utils PRIVATE fmt::fmt phrases)

# All users of this library will need at least C++17
target_compile_features(utils PUBLIC cxx_std_17)

# IDEs should put the headers in a nice place
source_group(
    TREE "${PROJECT_SOURCE_DIR}/include"
    PREFIX "Header Files"
    FILES ${HEADER_LIST}
)
