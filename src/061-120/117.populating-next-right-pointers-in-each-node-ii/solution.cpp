#include "solution.h"

#include <iostream>
#include <vector>

void solution::connect(TreeLinkNode *root) {
    std::vector<TreeLinkNode *> s;
    if (root != nullptr) s.push_back(root);
    int i = 0;
    while (i < s.size()) {
        int m = s.size();
        while (i < m) {
            if (s[i]->left != nullptr) s.push_back(s[i]->left);
            if (s[i]->right != nullptr) s.push_back(s[i]->right);
            if (i + 1 < m) s[i]->next = s[i + 1];
            else s[i]->next = nullptr;
            ++i;
        }
    }
    return;
}
