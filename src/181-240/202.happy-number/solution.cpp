#include "solution.h"

#include <set>
#include <iostream>

bool solution::isHappy(int n) {
    std::set<int> nums;
    while (nums.find(n) == nums.end()) {
        nums.insert(n);
        int sum = 0;
        while (n > 0) {
            int s = n % 10;
            n = n / 10;
            sum += s * s;
        }
        n = sum;
        if (n == 1) return true;
    }
    return false;
}
