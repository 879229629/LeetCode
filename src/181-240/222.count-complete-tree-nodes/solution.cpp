#include "solution.h"

#include <vector>
#include <cmath>

int solution::countNodes(TreeNode *root) {
    if (!root) return 0;
    TreeNode *l = root, *r = root;
    int ln = 0, rn = 0;
    while (l) {
        ++ln;
        l = l->left;
    }
    while (r) {
        ++rn;
        r = r->right;
    }
    if (ln == rn) return std::pow(2, ln) - 1;
    return 1 + countNodes(root->left) + countNodes(root->right);
}
