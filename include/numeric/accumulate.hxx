#pragma once

#include <utility>
#include <vector>

namespace numeric {

/// @brief Finds the mean and second moment from a [`std::vector`](https://en.cppreference.com/w/cpp/container/vector).
/// @param v Input vector
/// @return The mean and the second moment as a tuple
auto accumulate_vector(std::vector<double> v) -> std::tuple<double, double>;
}
