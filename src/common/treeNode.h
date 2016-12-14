#ifndef LEETCODE_TREENODE_H
#define LEETCODE_TREENODE_H

#include <vector>

class TreeNode {
public:
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

    TreeNode(std::vector<int> nums);

    // 层遍历
    std::vector<int> printByLayer();

    // 前序
    void printByPreorder(std::vector<int> &nums);

    // 前序
    std::vector<int> printByPreorder2();

    // 中序列
    void printByInorder(std::vector<int> &nums);

    std::vector<int> printByInorder2();

    // 后序
    void printByPostorder(std::vector<int> &nums);
};

#endif //LEETCODE_TREENODE_H
