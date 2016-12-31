#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    TreeNode *root = new TreeNode({1, 2, 3});
    TreeNode *p = s.lowestCommonAncestor(root, root->right, root->left);
    std::cout << "s: " << p->val << std::endl;
}