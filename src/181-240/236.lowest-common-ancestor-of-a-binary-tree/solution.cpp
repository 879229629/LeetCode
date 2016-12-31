#include "solution.h"

#include <iostream>

TreeNode *solution::lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q) {
    if (!root || root == p || root == q) return root;
    TreeNode *left = lowestCommonAncestor(root->left, p, q);
    TreeNode *right = lowestCommonAncestor(root->right, p, q);
    return !left ? right : !right ? left : root;
}


bool solution::exists(TreeNode *root, TreeNode *p) {
    if (!root || !p) return false;
    if (root->val == p->val) return true;
    return exists(root->left, p) || exists(root->right, p);
}
