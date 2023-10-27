#pragma once

#include <string>

namespace utils {

/// @brief Constructs a new [`std::string`](https://en.cppreference.com/w/cpp/string/basic_string) containing the input `phrase` repeat `n`
/// times, each separated by a space.
/// @param n Number of repeats of the input phrase.
/// @param phrase Input phrase.
/// @return The newly constructed string.
auto repeat(int n, std::string phrase) -> std::string;
}
