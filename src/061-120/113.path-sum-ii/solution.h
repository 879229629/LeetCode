#ifndef LEETCODE_113_SOLUTION_H_
#define LEETCODE_113_SOLUTION_H_

#include <vector>
#include "../../common/treeNode.h"

class solution {
public:
    std::vector<std::vector<int>> pathSum(TreeNode *root, int sum);

    void helper(TreeNode *root, int sum, std::vector<int> &path, std::vector<std::vector<int>> &paths);
};


#endif // LEETCODE_113_SOLUTION_H_
