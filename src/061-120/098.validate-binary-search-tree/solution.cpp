#include "solution.h"
#include <vector>
#include <iostream>

bool solution::isValidBST(TreeNode *root) {
    std::vector<TreeNode *> s;
    TreeNode *p = root;
    int min = 0;
    bool flag = false;
    while (p != nullptr || !s.empty()) {
        while (p) {
            s.push_back(p);
            p = p->left;
        }
        if (!s.empty()) {
            TreeNode *t = s.back();
            if (!flag) {
                min = t->val;
                flag = true;
            } else {
                if (min < t->val) min = t->val;
                else return false;
            }
            s.pop_back();
            p = t->right;
        }
    }
    return true;
}
