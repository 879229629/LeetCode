#ifndef LEETCODE_095_SOLUTION_H_
#define LEETCODE_095_SOLUTION_H_

#include <vector>

#include "../../common/treeNode.h"

class solution {
public:
    std::vector<TreeNode *> generateTrees(int n);

    std::vector<TreeNode *> helper(int s,int e);
};


#endif // LEETCODE_095_SOLUTION_H_
