#include <utils/print.hxx>

#include <string>

#include <fmt/core.h>

namespace utils {
auto print(std::string msg) -> void
{
    fmt::print("{}\n", msg);
}
}
