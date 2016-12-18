#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<int> nums = s.getRow(3);
    for (int i = 0; i < nums.size(); ++i) {
        std::cout << nums[i] << "  ";
    }
}