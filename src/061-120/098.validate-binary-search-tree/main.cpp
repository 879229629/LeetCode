#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    TreeNode *node = new TreeNode({1, 999, 1});
    std::cout << "s: " << s.isValidBST(node) << std::endl;

}