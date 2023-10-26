#include <utils/repeat.hxx>

#include <string>

namespace utils {
auto repeat(int n, std::string phrase) -> std::string
{
    using namespace std::literals;

    auto out = phrase;
    while (n > 1) {
        out += " "s + phrase;
        n -= 1;
    }

    return out;
}

}
