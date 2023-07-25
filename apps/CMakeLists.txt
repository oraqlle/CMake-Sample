add_executable(MainApp main.cxx)
target_compile_features(MainApp PRIVATE cxx_std_17)

target_link_libraries(MainApp PRIVATE numeric utils phrases fmt::fmt)
