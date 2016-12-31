#include "solution.h"

int solution::countDigitOne(int n) {
    int count = 0;
    while (n > 0) {
        count += countOne(n);
        --n;
    }
    return count;
}

int solution::countOne(int n) {
    int count = 0;
    while (n != 0) {
        ++count;
        n >>= 1;
    }
    return count;
}