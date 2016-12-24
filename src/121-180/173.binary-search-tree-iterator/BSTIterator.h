#ifndef LEETCODE_173_BSTITERATOR_H_
#define LEETCODE_173_BSTITERATOR_H_

#include <vector>

#include "../../common/treeNode.h"

class BSTIterator {
public:
    std::vector<int> m_;
    int i = 0;

    BSTIterator(TreeNode *root) {
        std::vector<TreeNode *> s;
        while (root != nullptr || !s.empty()) {
            while (root != nullptr) {
                s.push_back(root);
                root = root->left;
            }
            if (!s.empty()) {
                root = s.back();
                m_.push_back(root->val);
                s.pop_back();
                root = root->right;
            }
        }
    }

    /** @return whether we have a next smallest number */
    bool hasNext() {
        return i<m_.size();
    }

    /** @return the next smallest number */
    int next() {
        return m_[i++];
    }
};


#endif //LEETCODE_173_BSTITERATOR_H_
