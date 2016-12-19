#ifndef LEETCODE_124_SOLUTION_H_
#define LEETCODE_124_SOLUTION_H_

#include "../../common/treeNode.h"

class solution {
public:
    int maxPathSum(TreeNode* root);

    int helper(TreeNode* root, int &max);
};


#endif // LEETCODE_124_SOLUTION_H_
