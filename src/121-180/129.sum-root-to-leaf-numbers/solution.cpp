#include "solution.h"

int solution::sumNumbers(TreeNode *root) {
    return sumNumbers(root, 0);
}

int solution::sumNumbers(TreeNode *root, int val) {
    if (root == nullptr) return 0;
    int sum = 0;
    val = 10 * val + root->val;
    if (root->left == nullptr && root->right == nullptr) {
        sum += val;
    }
    sum += sumNumbers(root->left, val);
    sum += sumNumbers(root->right, val);
    return sum;
}