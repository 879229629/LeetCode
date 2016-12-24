#ifndef LEETCODE_173_BSTITERATOR_H_
#define LEETCODE_173_BSTITERATOR_H_

#include <vector>

#include "../../common/treeNode.h"

class BSTIterator {
public:
    std::vector<TreeNode *> s;

    BSTIterator(TreeNode *root) {
        findLeft(root);
    }

    /** @return whether we have a next smallest number */
    bool hasNext() {
        return !s.empty();
    }

    /** @return the next smallest number */
    int next() {
        TreeNode *p = s.back();
        s.pop_back();
        findLeft(p->right);
        return p->val;
    }

    void findLeft(TreeNode *p) {
        while (p != nullptr) {
            s.push_back(p);
            p = p->left;
        }
    }
};


#endif //LEETCODE_173_BSTITERATOR_H_
