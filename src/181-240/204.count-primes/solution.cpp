#include "solution.h"

#include <vector>
#include <iostream>
#include <cmath>

int solution::countPrimes(int n) {
    std::vector<bool> nums(n, false);
    int count = 0;
    int upper = std::sqrt(n);

    for (int i = 2; i < n; ++i) {
        if (nums[i] == false) {
            ++count;
            if (i > upper) continue;
            for (int j = i; j * i < n; ++j) {
                nums[i * j] = true;
            }
        }
    }
    return count;
}
