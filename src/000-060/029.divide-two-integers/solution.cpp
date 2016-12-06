#include "solution.h"

#include <climits>

#include <cstdlib>

int solution::divide(int dividend, int divisor) {
    if (divisor == 0) return INT_MAX;
    if (divisor == 1) return dividend;
    if (divisor == -1) {
        if (dividend == INT_MIN) {
            return INT_MAX;
        } else {
            return -dividend;
        }
    }
    if (dividend == 0) return 0;

    bool positive = (divisor > 0 && dividend > 0) || (divisor < 0 && dividend < 0);

    long m = std::abs(long(dividend));
    long n = std::abs(long(divisor));

    int ret = 0;

    int shift = 1;
    long sum = n;
    while ((sum << 1) < m) {
        shift *= 2;
        sum = sum << 1;
    }

    while (m >= n && sum >= n) {
        if (m >= sum) {
            m -= sum;
            ret += shift;
            continue;
        } else {
            sum >>= 1;
            shift /= 2;
        }
    }
    return positive ? ret : -ret;
}
