#include "solution.h"

int solution::singleNumber(std::vector<int> &nums) {
    std::sort(nums.begin(), nums.end());
    int val = 0;
    for (int i = 0; i < nums.size(); ++i) {
        if (i % 2 == 0) {
            val += nums[i];
        } else {
            val -= nums[i];
        }
    }
    return val;
}
