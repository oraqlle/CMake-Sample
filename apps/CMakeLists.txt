add_executable(app main.cxx)
target_compile_features(app PRIVATE cxx_std_17)

target_link_libraries(app PRIVATE maths phrases fmt::fmt)
