//
// Created by steven on 16/11/21.
//

#include "solution.h"
#include <iostream>
#include <assert.h>
#include <unordered_map>

std::vector<int> Solution::twoSum(std::vector<int> &nums, int target) {
    std::vector<int> result;
    std::unordered_map<int, int> hash;

    for (int i = 0; i < nums.size(); ++i) {
        auto numToFind = target - nums[i];
        if (hash.find(numToFind) != hash.end()) {
            result.push_back(hash[numToFind]);
            result.push_back(i);
            return result;
        }
        hash[nums[i]] = i;
    }
    assert(false && "Unreachable");
    return result;
}