#include "solution.h"

int solution::majorityElement(std::vector<int> &nums) {
    int a = 0;
    int count = 0;
    for (int i = 0; i < nums.size(); ++i) {
        if (count == 0) {
            a = nums[i];
            ++count;
        } else {
            if (a == nums[i]) ++count;
            else --count;
        }
    }
    return a;
}
