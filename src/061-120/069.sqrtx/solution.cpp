#include "solution.h"

int solution::mySqrt(int x) {
    if (x == 0) return 0;
    int from = 1;
    int to = x;

    while (from + 1 < to) {
        int mid = from + (to - from) / 2;
        if (mid <= x / mid) from = mid;
        else to = mid;
    }
    if (to <= x / to) {
        return to;
    }
    return from;
}
