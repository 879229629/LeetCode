#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    TreeNode *node = new TreeNode({1, 2, 3});
    int sum = s.sumNumbers(node);
    std::cout << "s: " << sum << std::endl;
}