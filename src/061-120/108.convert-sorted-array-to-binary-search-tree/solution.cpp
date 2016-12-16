#include "solution.h"

TreeNode *solution::sortedArrayToBST(std::vector<int> &nums) {
    if (nums.empty()) return nullptr;
    return helper(nums, 0, nums.size() - 1);
}


TreeNode *solution::helper(std::vector<int> &nums, int from, int to) {
    if (from > to) return nullptr;
    //[from,to]
    //[from,m] [m+1,to]
    int m = from + (to - from + 1) / 2;
    TreeNode *root = new TreeNode(nums[m]);
    root->left = helper(nums, from, m - 1);
    root->right = helper(nums, m + 1, to);
    return root;
}
