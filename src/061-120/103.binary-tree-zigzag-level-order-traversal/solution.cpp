#include "solution.h"
#include <iostream>

std::vector<std::vector<int>> solution::zigzagLevelOrder(TreeNode *root) {
    if (!root) return {};
    std::vector<std::vector<int>> result;
    std::vector<TreeNode *> s;
    s.push_back(root);
    int flag = 0;
    int i = 0;
    while (i < s.size()) {
        int to = s.size();
        std::vector<int> nums(to - i, 0);
        int j = i;
        while (i < to) {
            TreeNode *node = s[i];
            int index = flag % 2 == 0 ? i - j : to - 1 - i;
            nums[index] = node->val;
            if (node->left) s.push_back(node->left);
            if (node->right) s.push_back(node->right);
            ++i;
        }
        ++flag;
        result.push_back(nums);
    }
    return result;
}
