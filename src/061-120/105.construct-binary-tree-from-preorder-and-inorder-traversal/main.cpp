#include <iostream>
#include <vector>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<int> nums1 = {1, 2, 4, 5, 3, 6, 7};
    std::vector<int> nums2 = {4, 2, 5, 1, 6, 3, 7};
    TreeNode *r = s.buildTree(nums1, nums2);
    if (r) r->printByLayer2();
}