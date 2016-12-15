#include "solution.h"
#include <queue>

bool solution::isSymmetric(TreeNode *root) {
    if (!root) return true;
    std::queue<TreeNode *> p;
    std::queue<TreeNode *> q;
    p.push(root->left);
    q.push(root->right);
    TreeNode *l, *r;
    while (!p.empty() && !q.empty()) {
        l = p.front();
        p.pop();
        r = q.front();
        q.pop();
        if (!l && !r) continue;
        if (!l && r) return false;
        if (l && !r) return false;
        if (l->val != r->val) return false;
        p.push(l->left);
        p.push(l->right);
        q.push(r->right);
        q.push(r->left);
    }
    return true;
}
