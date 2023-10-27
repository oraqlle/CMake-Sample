#pragma once

#include <string>

namespace utils {

/// @brief Generates goodbye message (from `phrases::bye()`) and joins it with ", world!", returning the message as a
/// single [`std::string`](https://en.cppreference.com/w/cpp/string/basic_string).
/// @return string containing the message.
auto bye_world() -> std::string;

/// @brief Generates a `bye_world()` message 3 times and joins them as a single
/// [`std::string`](https://en.cppreference.com/w/cpp/string/basic_string) deliminated by a single space.
/// @return string containing the message.
auto bye_world_3_times() -> std::string;
}
