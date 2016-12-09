#include "solution.h"
#include <iostream>

#include <limits.h>

int solution::mySqrt(int x) {
    long from = 1;
    long to = x;

    while (from + 1 < to) {
        long mid = from + (to - from) / 2;
//        std::cout << from << "," << to << "," << mid << "," << mid * mid << std::endl;
        if (mid * mid <= x) from = mid;
        else to = mid;
    }
    if (to * to <= x) {
        return (int) to;
    }
    return (int) from;
}
