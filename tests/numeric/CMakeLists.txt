# Tests need to be added as executables first
add_executable(test-numericlib numericlib.test.cxx)

# I'm using C++17 in the test
target_compile_features(test-numericlib PRIVATE cxx_std_17)

# Should be linked to the main library, as well as the Catch2 testing library
target_link_libraries(test-numericlib PRIVATE utils numeric Catch2::Catch2)

# If you register a test, then ctest and make test will run it.
# You can also run examples and check the output, as well.
add_test(NAME test-numericlib-test COMMAND test-numericlib) # Command can be a target
