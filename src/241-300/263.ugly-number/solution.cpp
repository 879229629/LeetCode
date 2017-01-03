#include "solution.h"

#include <vector>

bool solution::isUgly(int num) {
    std::vector<int> nums = {5, 3, 2};
    while (!nums.empty() && num > 1) {
        if (num % nums.back() == 0) {
            num = num / nums.back();
        } else {
            nums.pop_back();
        }
    }
    return num == 1;
}
