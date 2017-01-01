#include "solution.h"

std::vector<int> solution::productExceptSelf(std::vector<int> &nums) {
    std::vector<int> res(nums.size());
    int sum = 1;
    int pos = -1;
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] == 0) {
            if (pos == -1) {
                pos = i;
            } else {
                return res;
            }
        } else {
            sum *= nums[i];
        }
    }
    for (int j = 0; j < nums.size(); ++j) {
        if (pos == -1) {
            res[j] = sum / nums[j];
        } else if (pos == j) {
            res[j] = sum;
        }
    }
    return res;
}
