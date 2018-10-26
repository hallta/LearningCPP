#include <iostream>
#include <cmath>
#include <cstdint>
#include "arithmetic.h"

namespace arithmetic {

    void mixed_type_math() {
        int x(1), y(3);

        int intDiv = x / y;
        double doubDiv = static_cast<double>(x) / y;
        float floatDiv = static_cast<double>(x) / static_cast<double>(y); 
        std::cout << intDiv << std::endl;
        std::cout << doubDiv << std::endl;
        std::cout << floatDiv << std::endl;

        //std::cout << 2**2 << std::endl;
        //std::cout << 2^2 << std::endl;
        std::cout << std::pow(2, 64) << std::endl;
        std::cout << arithmetic::pow(2, 32) << std::endl;
    }

    int64_t pow(int base, int exp) {

        int64_t result(1);
        while (exp) {
            if (exp & 1) {
                result *= base;
            }

            exp >>= 1;
            base *= base;
        }

        return result;
    }

    void goofy_assignments() {
        int x(1);
        int y(3);

        int z = (++x, ++y);
        std::cout << "== goofy_assignemnts ==" << std::endl;
        std::cout << x << std::endl;
        std::cout << y << std::endl;
        std::cout << z << std::endl;

        int n = x ? x : y;
        std::cout << "n = " << n << std::endl;
    }
}