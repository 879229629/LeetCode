#include "solution.h"

void solution::recoverTree(TreeNode *root) {
    std::vector<TreeNode *> s;
    TreeNode *p = root;
    std::vector<TreeNode *> result;
    std::vector<TreeNode *> data;
    while (p || !s.empty()) {
        while (p) {
            s.push_back(p);
            p = p->left;
        }
        if (!s.empty()) {
            TreeNode *tmp = s.back();
            if (data.empty() || data.back()->val < tmp->val) data.push_back(tmp);
            else {
                TreeNode *errorNode = data.back();
                data.pop_back();
                result.push_back(errorNode);
                result.push_back(tmp);
            }
            s.pop_back();
            p = tmp->right;
        }
    }
    if (result.size() == 2) std::swap(result[0]->val, result[1]->val);
    if (result.size() == 4) std::swap(result[0]->val, result[3]->val);
    return;
}
