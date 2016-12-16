#include "solution.h"

TreeNode *solution::buildTree(std::vector<int> &preorder, std::vector<int> &inorder) {
    if (preorder.empty()) return nullptr;
    for (int i = 0; i < inorder.size(); ++i) {
        m_[inorder[i]] = i;
    }
    return build(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1);
}

TreeNode *solution::build(std::vector<int> &preorder, int s0, int e0, std::vector<int> &inorder, int s1, int e1) {
    if (s0 > e0 || s1 > e1)return nullptr;
    int mid = m_[preorder[s0]];
    int num = mid - s1;
    TreeNode *root = new TreeNode(preorder[s0]);
    root->left = build(preorder, s0 + 1, s0 + num, inorder, s1, mid - 1);
    root->right = build(preorder, s0 + num + 1, e0, inorder, mid + 1, e1);
    return root;
}