#include "solution.h"

#include <limits.h>
#include <iostream>

int solution::reverse(int x) {
    int factor = 1;
    if (x < 0) {
        factor = -1;
        x = -x;
    }
    long newNumber = 0;

    while (x != 0) {
        int s = x % 10;
        s = s > 0 ? s : -s;
        newNumber = newNumber * 10 + s;
        if (newNumber > INT_MAX) {
            newNumber = 0;
            break;
        }
        x /= 10;
    }
    newNumber *= factor;
    return static_cast<int>(newNumber);
}