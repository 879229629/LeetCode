#include <iostream>
#include <vector>
#include "solution.h"

/*
 * Given nums = [2, 7, 11, 15], target = 9,
 * Because nums[0] + nums[1] = 2 + 7 = 9,
 * return [0, 1]
 */

int main(int argc, char *argv[]) {
    std::vector<int> input{11, 2, 87, 6};
    int target(8);

    Solution solution;
    auto result = solution.twoSum(input, target);
    std::cout << "first: " << result[0] << ", second: " << result[1] << std::endl;
    return 0;
}
