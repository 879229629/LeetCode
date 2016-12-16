#include <iostream>
#include <vector>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    TreeNode *node = s.sortedArrayToBST(nums);
}