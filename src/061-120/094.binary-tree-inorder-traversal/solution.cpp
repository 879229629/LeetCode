#include "solution.h"

std::vector<int> solution::inorderTraversal(TreeNode *root) {
    std::vector<int> nums;
    TreeNode *p = root;
    std::vector<TreeNode *> s;
    while (p != nullptr || !s.empty()) {
        while (p != nullptr) {
            s.push_back(p);
            p = p->left;
        }
        if (!s.empty()) {
            p = s.back();
            nums.push_back(p->val);
            s.pop_back();
            p = p->right;
        }
    }
    return nums;
}
