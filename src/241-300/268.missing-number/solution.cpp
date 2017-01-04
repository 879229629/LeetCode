#include "solution.h"

int solution::missingNumber(std::vector<int> &nums) {
    int n = nums.size();
    int res = 0;
    for (int i = 0; i < nums.size(); ++i) {
        res += i;
        res -= nums[i];
    }
    return res + n;
}
