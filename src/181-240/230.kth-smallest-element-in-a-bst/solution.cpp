#include "solution.h"

#include <vector>

int solution::kthSmallest(TreeNode *root, int k) {
    TreeNode *p = root;
    std::vector<TreeNode *> s;
    while (p || !s.empty()) {
        while (p) {
            s.push_back(p);
            p = p->left;
        }
        if (!s.empty()) {
            p = s.back();
            if (--k == 0) {
                return p->val;
            }
            s.pop_back();
            p = p->right;
        }

    }
    return ;
}
