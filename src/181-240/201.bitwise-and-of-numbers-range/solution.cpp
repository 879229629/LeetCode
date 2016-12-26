#include "solution.h"

int solution::rangeBitwiseAnd(int m, int n) {
    if (m == 0) return 0;
    int c = 1;
    while (m != n) {
        m >>= 1;
        n >>= 1;
        c <<= 1;
    }
    return m * c;
}
