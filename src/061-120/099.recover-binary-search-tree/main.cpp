#include <iostream>

#include "solution.h"

void print(std::string s, std::vector<int> nums) {
    std::cout << s << std::endl;
    for (int i = 0; i < nums.size(); ++i) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;
}

int main(int argc, char *argv[]) {
    TreeNode *node = new TreeNode({2,3,1});
    auto nums = node->printByInorder2();
    print("befor:", nums);
    solution s;
    s.recoverTree(node);
    nums = node->printByInorder2();
    print("after:", nums);
}