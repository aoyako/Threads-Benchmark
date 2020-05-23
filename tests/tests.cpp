#include "catch.hpp"

#include <input.hpp>

TEST_CASE("test") {
    const Test<int> t;
    
    REQUIRE(t.Slow() == 43);
    REQUIRE(t.Fast() == 42);
}
