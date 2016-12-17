#include "solution.h"

int solution::minDepth(TreeNode *root) {
    if (root == nullptr) return 0;
    if (root->left == nullptr && root->right == nullptr) return 1;
    if (root->left == nullptr || root->right == nullptr) {
        return 1 + std::max(minDepth(root->left), minDepth(root->right));
    } else {
        return 1 + std::min(minDepth(root->left), minDepth(root->right));
    }
}
