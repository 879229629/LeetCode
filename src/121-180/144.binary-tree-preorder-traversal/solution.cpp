#include "solution.h"

std::vector<int> solution::preorderTraversal(TreeNode *root) {
    std::vector<int> nums;
    std::vector<TreeNode *> s;
    TreeNode *p = root;
    while (p != nullptr || !s.empty()) {
        while (p != nullptr) {
            nums.push_back(p->val);
            s.push_back(p);
            p = p->left;
        }
        if(!s.empty()){
            p = s.back();
            s.pop_back();
            p=p->right;
        }
    }
    return nums;
}
