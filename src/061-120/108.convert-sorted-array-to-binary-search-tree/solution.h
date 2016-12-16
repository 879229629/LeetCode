#ifndef LEETCODE_108_SOLUTION_H_
#define LEETCODE_108_SOLUTION_H_

#include "../../common/treeNode.h"
#include <vector>

class solution {
public:
    TreeNode *sortedArrayToBST(std::vector<int> &nums);

    TreeNode *helper(std::vector<int> &nums, int from, int to);
};


#endif // LEETCODE_108_SOLUTION_H_
