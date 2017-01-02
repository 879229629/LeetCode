#include "solution.h"

std::vector<std::string> solution::binaryTreePaths(TreeNode *root) {
    if (!root) return {};
    std::vector<std::string> res;
    helper(res, root, "");
    return res;
}

void solution::helper(std::vector<std::string> &res, TreeNode *root, std::string pre) {
    std::string s = pre.empty() ? std::to_string(root->val) : pre + "->" + std::to_string(root->val);
    if (!root->left && !root->right) {
        res.push_back(s);
        return;
    }
    if (root->left) {
        helper(res, root->left, s);
    }
    if (root->right) {
        helper(res, root->right, s);
    }
}
