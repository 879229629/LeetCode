#ifndef LEETCODE_106_SOLUTION_H_
#define LEETCODE_106_SOLUTION_H_

#include <vector>
#include <unordered_map>

#include "../../common/treeNode.h"


class solution {
public:
    std::unordered_map<int, int> m_;

    TreeNode *buildTree(std::vector<int> &inorder, std::vector<int> &postorder);

    TreeNode *build(std::vector<int> &preorder, int s0, int e0, std::vector<int> &inorder, int s1, int e1);
};

#endif // LEETCODE_106_SOLUTION_H_
