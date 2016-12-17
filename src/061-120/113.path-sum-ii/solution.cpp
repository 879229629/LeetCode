#include "solution.h"
#include <iostream>

std::vector<std::vector<int>> solution::pathSum(TreeNode *root, int sum) {
    std::vector<std::vector<int>> paths;
    std::vector<int> path;
    helper(root, sum, path, paths);
    return paths;
}

void solution::helper(TreeNode *root, int sum, std::vector<int> &path, std::vector<std::vector<int>> &paths) {
    if (root == nullptr) return;
    path.push_back(root->val);
    if (root->left == nullptr && root->right == nullptr && sum == root->val) paths.push_back(path);
    helper(root->left, sum - root->val, path, paths);
    helper(root->right, sum - root->val, path, paths);
    path.pop_back();
}
