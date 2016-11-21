//
// Created by steven on 16/11/21.
//

#include "solution.h"
#include <iostream>
#include <assert.h>

std::vector<int> Solution::twoSum(std::vector<int> &nums, int target) {
    std::vector<int> result;
    for (int i = 0; i < nums.size(); ++i) {
        for (int j = i + 1; j < nums.size(); ++j) {
            if (nums[i] + nums[j] == target) {
                result.push_back(i);
                result.push_back(j);
                return result;
            }
        }
    }
    assert(false && "Unreachable");
    return result;
}