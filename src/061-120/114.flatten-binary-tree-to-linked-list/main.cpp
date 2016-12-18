#include <iostream>
#include <vector>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    TreeNode *node = new TreeNode({1, 2, 5, 3, 4, 6});
    s.flatten(node);
    std::vector<int> nums = node->printByLayer();

    for (int i = 0; i < nums.size(); ++i) {
        std::cout << nums[i] << "  ";
    }
}