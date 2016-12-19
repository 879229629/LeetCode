#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<int> nums = {7,1,5,3,6,4};
    int ret = s.maxProfit(nums);
    std::cout << "s: " << ret << std::endl;
}