#include "solution.h"

int solution::mySqrt(int x) {
    long from = 1;
    long to = x;

    while (from + 1 < to) {
        long mid = from + (to - from) / 2;
        if (mid * mid <= x) from = mid;
        else to = mid;
    }
    if (to * to <= x) {
        return (int) to;
    }
    return (int) from;
}
