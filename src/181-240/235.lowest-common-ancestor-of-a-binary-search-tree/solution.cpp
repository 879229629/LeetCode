#include "solution.h"

TreeNode *solution::lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q) {
    if (!root || !p || !q) return root;
    if (p == q) return p;
    if (p->val > q->val) return lowestCommonAncestor(root, q, p);

    if (q->val < root->val) {
        return lowestCommonAncestor(root->left, p, q);
    } else if (root->val < p->val) {
        return lowestCommonAncestor(root->right, p, q);
    } else {
        return root;
    }
}
