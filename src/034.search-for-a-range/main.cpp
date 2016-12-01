#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<int> nums = {2,2};
    std::vector<int> result = s.searchRange(nums,2);
    std::cout << "ret: " << result[0] << "," << result[1] << std::endl;
}