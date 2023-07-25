#include <numeric/accumulate.hxx>

#include <phrases/bye.hxx>
#include <phrases/greet.hxx>

#include <utils/bye_world.hxx>
#include <utils/repeat.hxx>

#include <iostream>
#include <tuple>
#include <vector>

#include <fmt/core.h>

auto main() -> int
{
    std::cout << phrases::greet() << ", world!" << std::endl;

    std::cout << utils::repeat(7, phrases::greet()) << std::endl;

    fmt::print("{}\n", phrases::greet_nine_times());

    auto v = std::vector<double> { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    auto [mean, moment] = numeric::accumulate_vector(v);
    fmt::print("mean: {} | moment: {}\n", mean, moment);

    fmt::print("{}\n", utils::bye_world());
    fmt::print("{}\n", utils::bye_world_3_times());

    fmt::print("{}, world!\n", phrases::bye());

    return 0;
}
