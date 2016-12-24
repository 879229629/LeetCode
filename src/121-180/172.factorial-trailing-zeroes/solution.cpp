#include "solution.h"
#include <iostream>
#include <map>

int solution::trailingZeroes(int n) {
    int count = 0;
    while (n / 5 != 0) {
        n = n / 5;
        count += n;
    }
    return count;
}
