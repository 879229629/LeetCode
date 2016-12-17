#include "solution.h"

#include <cstdlib>

bool solution::isBalanced(TreeNode *root) {
    if (root == nullptr) return true;
    int l = maxDepth(root->left);
    int r = maxDepth(root->right);
    if (std::abs(l - r) > 1) return false;
    return isBalanced(root->left) && isBalanced(root->right);
}

int solution::maxDepth(TreeNode *root) {
    if (!root) return 0;
    return 1 + std::max(maxDepth(root->left), maxDepth(root->right));
}
