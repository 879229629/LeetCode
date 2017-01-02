#ifndef LEETCODE_257_SOLUTION_H_
#define LEETCODE_257_SOLUTION_H_

#include <vector>
#include <string>

#include "../../common/treeNode.h"

class solution {
public:
    std::vector<std::string> binaryTreePaths(TreeNode *root);

    void helper(std::vector<std::string> &res, TreeNode *root, std::string pre);
};


#endif // LEETCODE_257_SOLUTION_H_
