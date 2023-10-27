#pragma once

#include <string>

namespace utils {

/// @brief Prints the [`std::string`](https://en.cppreference.com/w/cpp/string/basic_string) to `stdout`.
/// @param msg Message to display.
auto print(std::string msg) -> void;
}