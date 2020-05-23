cmake_minimum_required(VERSION 3.14)
project(threads_benchmark CXX)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS "-pthread")

set(TOP_DIR ${CMAKE_SOURCE_DIR})
set(TESTS_DIR ${TOP_DIR}/tests)
set(BENCHMARK_DIR ${TOP_DIR}/code_benchmark)
set(BENCHMARK_LIBRARY_DIR ${TOP_DIR}/benchmark)
set(GTEST_LIBRARY_DIR ${TOP_DIR}/googletest)
set(LIB_DIR ${TOP_DIR}/lib)

# output dirs
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# include libraries
add_subdirectory(${LIB_DIR})

# include tests
add_subdirectory(${TESTS_DIR})

# include benchmark
add_subdirectory(${BENCHMARK_DIR})

# include benchmark library
add_subdirectory(${BENCHMARK_LIBRARY_DIR})

set_target_properties(benchmark PROPERTIES CMAKE_ARGS "-DBENCHMARK_ENABLE_GTEST_TESTS=OFF")
