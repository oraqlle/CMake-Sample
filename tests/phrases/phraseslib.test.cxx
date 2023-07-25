#define CATCH_CONFIG_MAIN

#include <catch2/catch.hpp>

#include <phrases/bye.hxx>
#include <phrases/greet.hxx>

TEST_CASE("Phrases Quick Check", "[main]")
{
    REQUIRE(phrases::greet() == "Hello");
    REQUIRE_FALSE(phrases::greet() == "Hello!");
    REQUIRE(phrases::bye() == "Bye");
    REQUIRE(phrases::greet_nine_times() == "Hello Hello Hello Hello Hello Hello Hello Hello Hello");
}
