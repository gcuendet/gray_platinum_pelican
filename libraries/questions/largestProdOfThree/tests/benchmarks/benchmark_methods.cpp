#include <benchmark/benchmark.h>

#include <questions/largestProdOfThree/brute_force_method.hpp>
#include <questions/largestProdOfThree/sort_method.hpp>
#include <questions/largestProdOfThree/queue_method.hpp>

#include <random>
#include <vector>

template <class ExtraArg>
static void BM_largestProdOfThree(benchmark::State& state, ExtraArg&& implementation) {
    std::random_device rnd;
    std::mt19937 mersenne_engine {rnd()};
    std::uniform_int_distribution<int> dist;

    auto gen = [&dist, &mersenne_engine](){
                   return dist(mersenne_engine);
               };

    for(auto _ : state) {
        std::vector<int> input(state.range(0));
        std::generate(input.begin(), input.end(), gen);

        implementation(input);
    }
}

BENCHMARK_CAPTURE(BM_largestProdOfThree, brute_force, largest_product_brute_force)->RangeMultiplier(2)->Range(64, 4096)->Complexity()->Unit(benchmark::kMicrosecond);
BENCHMARK_CAPTURE(BM_largestProdOfThree, sort, largest_product_sort)->RangeMultiplier(2)->Range(64, 8<<12)->Complexity()->Unit(benchmark::kMicrosecond);
BENCHMARK_CAPTURE(BM_largestProdOfThree, queue, largest_product_queue)->RangeMultiplier(2)->Range(64, 8<<12)->Complexity()->Unit(benchmark::kMicrosecond);
