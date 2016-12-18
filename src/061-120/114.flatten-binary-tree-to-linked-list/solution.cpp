#include "solution.h"

void solution::flatten(TreeNode *root) {
    while (root != nullptr) {
        if (root->left != nullptr && root->right != nullptr) {
            TreeNode *t = root->left;
            while (t->right != nullptr) t = t->right;
            t->right = root->right;
        }

        if (root->left != nullptr) root->right = root->left;
        root->left = nullptr;
        root = root->right;
    }
}
