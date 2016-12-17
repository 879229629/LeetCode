#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    TreeNode *node = new TreeNode({3, 9, 20, 999, 999, 15, 7});
    int depth = s.minDepth(node);
    std::cout << "s: " << depth << std::endl;
}