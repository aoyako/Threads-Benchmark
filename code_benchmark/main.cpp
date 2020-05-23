#include <benchmark/benchmark.h>

#include <input.hpp>


static void BM_TestSlow(benchmark::State& state) {
    Test<int> test;
    for (auto _ : state) {
        test.Slow();
    }
}
BENCHMARK(BM_TestSlow);

static void BM_TestFast(benchmark::State& state) {
    Test<int> test;
    for (auto _ : state) {
        test.Fast();
    }
}
BENCHMARK(BM_TestFast);

BENCHMARK_MAIN();
