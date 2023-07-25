#define CATCH_CONFIG_MAIN

#include <catch2/catch.hpp>

#include <utils/bye_world.hxx>
#include <utils/print.hxx>
#include <utils/repeat.hxx>

TEST_CASE("Utils Quick check", "[main]")
{
    REQUIRE(utils::repeat(3, "H") == "H H H");
    REQUIRE_FALSE(utils::repeat(4, "H") == "H H H");
    REQUIRE(utils::bye_world() == "Bye, world!");
    REQUIRE(utils::bye_world_3_times() == "Bye, world! Bye, world! Bye, world!");
    REQUIRE_FALSE(utils::bye_world_3_times() == "Bye, world! Bye, world! Bye, world! Bye, world!");

    utils::print("Test print");
}
