#pragma once

#include <vector>
#include <unistd.h>

template<typename T>
class Test {
public:
    size_t Slow() const {
        usleep(2000);
        return 43;
    }
    size_t Fast() const {
        return 42;
    }
};
