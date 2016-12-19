#include "solution.h"

int solution::maxPathSum(TreeNode *root) {
    int max = INT_MIN;
    helper(root, max);
    return max;
}

int solution::helper(TreeNode *root, int &max) {
    if (root == nullptr) return 0;
    int l = helper(root->left, max);
    int r = helper(root->right, max);
    if (l < 0) l = 0;
    if (r < 0) r = 0;
    if (l + r + root->val > max) max = l + r + root->val;
    return root->val + std::max(l, r);
}
