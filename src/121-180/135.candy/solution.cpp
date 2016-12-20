#include "solution.h"

int solution::candy(std::vector<int> &ratings) {
    int m = ratings.size();
    std::vector<int> nums(m, 1);
    for (int i = 1; i < m; ++i) {
        if (ratings[i] > ratings[i - 1] && nums[i] <= nums[i - 1]) nums[i] = nums[i - 1] + 1;
    }
    for (int i = m - 2; i >= 0; --i) {
        if (ratings[i] > ratings[i + 1] && nums[i] <= nums[i + 1]) nums[i] = nums[i + 1] + 1;
    }
    int sum = 0;
    for (int j = 0; j < m; ++j) {
        sum += nums[j];
    }
    return sum;
}
