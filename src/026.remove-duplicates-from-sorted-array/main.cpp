#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<int> nums = {1,1,2};
    int ret = s.removeDuplicates(nums);
    std::cout << "ret: " << ret << std::endl;
}