#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<std::pair<int, int>> vp = {
            std::make_pair(1, 0),
            std::make_pair(2, 0)
    };
    std::vector<int> nums = s.findOrder(3, vp);
    for (int i = 0; i < nums.size(); ++i) {
        std::cout << nums[i] << "  ";
    }
}