#include <iostream>
#include <vector>
#include "treeNode.h"

void print(std::string s, std::vector<int> nums) {
    std::cout << s << std::endl;
    for (int i = 0; i < nums.size(); ++i) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5, 999, 6, 999, 999, 7, 999, 8};
    print("原数据:", nums);
    TreeNode *node = new TreeNode(nums);
    nums = node->printByLayer();
    print("层遍历:", nums);

    nums.clear();
    node->printByPreorder(nums);
    print("前序遍历:", nums);

    nums.clear();
    nums = node->printByPreorder2();
    print("前序遍历2:", nums);


    nums.clear();
    node->printByInorder(nums);
    print("中序遍历:", nums);

    nums.clear();
    nums = node->printByInorder2();
    print("中序遍历2:", nums);

    nums.clear();
    node->printByPostorder(nums);
    print("后序遍历:", nums);
}