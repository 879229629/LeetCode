#include <iostream>
#include <vector>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<int> nums1 = {4, 2, 5, 1, 6, 3, 7};
    std::vector<int> nums2 = {4, 5, 2, 6, 7, 3, 1};
    TreeNode *r = s.buildTree(nums1, nums2);
    if (r) r->printByLayer2();
}