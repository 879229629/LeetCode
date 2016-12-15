#include "solution.h"

std::vector<TreeNode *> solution::generateTrees(int n) {
    if (n == 0) return {};
    return helper(1, n);
}

std::vector<TreeNode *> solution::helper(int s, int e) {
    if (s > e) return std::vector<TreeNode *>(1, nullptr);
    std::vector<TreeNode *> result;
    for (int i = s; i <= e; ++i) {
        std::vector<TreeNode *> left, right;
        left = helper(s, i - 1);
        right = helper(i + 1, e);
        for (int j = 0; j < left.size(); ++j) {
            for (int k = 0; k < right.size(); ++k) {
                TreeNode *root = new TreeNode(i);
                root->left = left[j];
                root->right = right[k];
                result.push_back(root);
            }
        }
    }
    return result;
}
