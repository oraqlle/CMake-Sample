#define CATCH_CONFIG_MAIN

#include <catch2/catch.hpp>

#include <numeric/accumulate.hxx>

#include <tuple>
#include <vector>

TEST_CASE("Numeric Quick check", "[main]")
{
    auto v = std::vector<double> { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    auto [mean, moment] = numeric::accumulate_vector(v);

    REQUIRE(mean == 5);
    REQUIRE(moment == 31.666666666666668);

    v.push_back(0);

    auto [mean2, moment2] = numeric::accumulate_vector(v);

    REQUIRE(mean2 == 4.5);
    REQUIRE(moment2 == 28.5);
}
