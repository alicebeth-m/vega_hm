#include <benchmark/benchmark.h>
#include "mathlib.h"

static void BM_Factorial(benchmark::State& state) {
    for (auto _ : state) {
        factorial(state.range(0));
    }
}
BENCHMARK(BM_Factorial)->Arg(10)->Arg(15)->Arg(20);

static void BM_IsPrime(benchmark::State& state) {
    for (auto _ : state) {
        is_prime(state.range(0));
    }
}
BENCHMARK(BM_IsPrime)->Arg(29)->Arg(97)->Arg(100);

BENCHMARK_MAIN();
