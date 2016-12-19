#include "solution.h"

int solution::longestConsecutive(std::vector<int> &nums) {
    std::sort(nums.begin(), nums.end());
    int max = INT_MIN;
    int cout = 0;
    for (int i = 0; i < nums.size(); ++i) {
        if (i == 0) {
            ++cout;
        } else if (nums[i] == nums[i - 1]) {
//
        } else if (nums[i] == nums[i - 1] + 1) {
            ++cout;
        } else {
            max = std::max(max, cout);
            cout = 1;
        }
    }
    return std::max(max, cout);
}
