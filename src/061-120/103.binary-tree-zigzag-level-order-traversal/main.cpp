#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    TreeNode *node = new TreeNode({3, 9, 20, 999, 999, 15, 7});
    auto result = s.zigzagLevelOrder(node);
    for (int i = 0; i < result.size(); ++i) {
        for (int j = 0; j < result[i].size(); ++j) {
            std::cout << result[i][j] << "  ";
        }
        std::cout << "\n";
    }
}