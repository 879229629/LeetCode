#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<int> nums = {1,3,5,6};
    int ret = s.searchInsert(nums,7);
    std::cout << "ret: " << ret << std::endl;
}