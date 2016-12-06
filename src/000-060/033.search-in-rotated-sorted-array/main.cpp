#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<int> nums = {3,1};
    int target = 0;
    int ret = s.search(nums,target);
    std::cout << "ret: " << ret << std::endl;
}