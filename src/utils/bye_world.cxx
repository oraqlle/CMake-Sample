#include <utils/repeat.hxx>

#include <phrases/bye.hxx>

#include <string>

namespace utils {

using namespace std::literals;

auto bye_world() -> std::string
{
    return phrases::bye() + ", world!";
}

auto bye_world_3_times() -> std::string
{
    return utils::repeat(3, bye_world());
}

}
