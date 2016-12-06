#include "solution.h"

#include <limits.h>
#include <iostream>

bool solution::isPalindrome(int x) {
    if (x < 0) return false;
    int newX = 0;
    int k = x;
    while (k > 0) {
        newX = newX * 10 + k % 10;
        k /= 10;
    }
    return newX == x;
}
