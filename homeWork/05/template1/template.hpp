#pragma once
#include <cmath>
#define EPS 1e-10


template<int N>
auto fibonacci() -> int {
    return fibonacci<N - 1>() + fibonacci<N - 2>();
}

template<>
auto fibonacci<0>() -> int {
    return 0;
}

template<>
auto fibonacci<1>() -> int {
    return 1;
}


template<int N>
class Fibonacci {
public:
    static const int value = Fibonacci<N - 1>::value + Fibonacci<N - 2>::value;
};


template<>
class Fibonacci<0> {
public:
    static const int value = 0;
};

template<>
class Fibonacci<1> {
public:
    static const int value = 1;
};
