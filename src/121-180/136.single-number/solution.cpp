#include "solution.h"

int solution::singleNumber(std::vector<int> &nums) {
    int val = 0;
    for (int i = 0; i < nums.size(); ++i) {
        val ^= nums[i];
    }
    return val;
}
