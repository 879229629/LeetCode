#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    TreeNode *node = new TreeNode({1, 2, 2, 3, 4, 4, 3});
    std::cout << "s: " << s.isSymmetric(node) << std::endl;
}