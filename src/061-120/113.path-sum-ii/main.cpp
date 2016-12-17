#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    TreeNode *node = new TreeNode({5, 4, 8, 11, 999, 13, 4, 7, 2, 999, 999, 5, 1});
    std::vector<std::vector<int>> result = s.pathSum(node, 22);
    std::cout << result.size();
}