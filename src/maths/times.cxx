#include <maths/times.hxx>

#include <string>

namespace math {
auto times(int n, std::string phrase) -> std::string
{
    using namespace std::literals;

    auto out = phrase;
    while (n--) {
        out += " "s + phrase;
    }

    return out;
}
}
