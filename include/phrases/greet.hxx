#pragma once

#include <string>

namespace phrases {

/// @brief Generates a greeting message as a [`std::string`](https://en.cppreference.com/w/cpp/string/basic_string).
/// @return string containing the message.
auto greet() -> std::string;

/// @brief Generates a `greet()` message 9 times and joins them as a single
/// [`std::string`](https://en.cppreference.com/w/cpp/string/basic_string) deliminated by a single space.
/// @return string containing the message.
auto greet_nine_times() -> std::string;
}
