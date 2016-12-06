#include "solution.h"

#include <iostream>

int solution::jump(std::vector<int> &nums) {
    if (nums.size() <= 1) return 0;

    int max = 0;
    int begin = 0;
    int end = nums[0];
    int count = 1;

    while (end < nums.size() - 1) {
        std::cout << begin << "," << end << "," << max << "," << count << std::endl;
        count++;
        int index = begin;
        for (; index <= end; ++index) {
            max = std::max(max, index + nums[index]);
        }
        begin = index;
        end = max;
    }

    return count;
}
