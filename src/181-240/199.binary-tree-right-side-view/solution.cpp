#include "solution.h"

std::vector<int> solution::rightSideView(TreeNode *root) {
    if (root == nullptr) return {};
    std::vector<int> nums;
    std::vector<TreeNode *> s;
    s.push_back(root);
    int k = 0;
    while (k < s.size()) {
        int len = s.size();
        nums.push_back(s[len - 1]->val);
        for (int i = k; i < len; ++i) {
            if (s[k]->left) s.push_back(s[k]->left);
            if (s[k]->right) s.push_back(s[k]->right);
            ++k;
        }
    }
    return nums;
}
