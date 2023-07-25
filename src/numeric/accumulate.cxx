#include <numeric/accumulate.hxx>

#include <utils/print.hxx>

#include <algorithm>
#include <tuple>
#include <vector>

#include <boost/accumulators/accumulators.hpp>
#include <boost/accumulators/statistics/mean.hpp>
#include <boost/accumulators/statistics/moment.hpp>
#include <boost/accumulators/statistics/stats.hpp>

namespace numeric {

auto accumulate_vector(std::vector<double> v) -> std::tuple<double, double>
{
    namespace ba = boost::accumulators;

    ba::accumulator_set<double, ba::stats<ba::tag::mean, ba::tag::moment<2>>> acc;

    utils::print("Starting Vector Accumulate");

    std::for_each(std::begin(v), std::end(v), std::ref(acc));

    utils::print("End Vector Accumulate");

    return { ba::mean(acc), ba::moment<2>(acc) };
}
}
