#pragma once

#include <utility>
#include <vector>

namespace numeric {
auto accumulate_vector(std::vector<double> v) -> std::tuple<double, double>;
}
