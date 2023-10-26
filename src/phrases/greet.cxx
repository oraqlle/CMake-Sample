#include <phrases/greet.hxx>
#include <utils/repeat.hxx>

#include <string>

namespace phrases {
auto greet() -> std::string
{
    return "Hello";
}

auto greet_nine_times() -> std::string
{
    return utils::repeat(9, greet());
}
}
