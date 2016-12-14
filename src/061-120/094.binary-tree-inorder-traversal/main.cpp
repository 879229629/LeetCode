#include <iostream>

#include "../../common/treeNode.h"

#include "solution.h"

int main(int argc, char *argv[]) {
    TreeNode *node = new TreeNode({1, 999, 2, 3});
    solution s;
    std::vector<int> nums = s.inorderTraversal(node);
    for (int i = 0; i < nums.size(); ++i) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;
}