#include <phrases/bye.hxx>
#include <phrases/greet.hxx>

#include <maths/times.hxx>

#include <iostream>

#include <fmt/core.h>

auto main() -> int
{
    std::cout << phrases::greet() << ", world!" << std::endl;

    std::cout << math::times(7, phrases::greet()) << std::endl;

    fmt::print("{}, world!\n", phrases::bye());

    return 0;
}
