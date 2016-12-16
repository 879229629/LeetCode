#include "solution.h"

TreeNode *solution::buildTree(std::vector<int> &inorder, std::vector<int> &postorder) {
    if (inorder.empty()) return nullptr;
    for (int i = 0; i < inorder.size(); ++i) {
        m_[inorder[i]] = i;
    }
    return build(inorder, 0, inorder.size() - 1, postorder, 0, postorder.size() - 1);
}

TreeNode *solution::build(std::vector<int> &inorder, int s0, int e0, std::vector<int> &postorder, int s1, int e1) {
    if (s0 > e0 || s1 > e1)return nullptr;
    int mid = m_[postorder[e1]];
    int num = mid - s0;
    TreeNode *root = new TreeNode(postorder[e1]);
    root->left = build(inorder, s0, mid - 1, postorder, s1, s1 + num - 1);
    root->right = build(inorder, mid + 1, e0, postorder, s1 + num, e1 - 1);
    return root;
}