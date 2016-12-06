#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;

    std::vector<int> nums = {0,1,2};
    int target = 0;
    int k = s.threeSumClosest(nums,target);
    std::cout << "k: " << k << std::endl;
}