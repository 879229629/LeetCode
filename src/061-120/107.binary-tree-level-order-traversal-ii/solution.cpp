#include "solution.h"

std::vector<std::vector<int>> solution::levelOrderBottom(TreeNode *root) {
    if (!root) return {};
    std::vector<std::vector<int>> result;
    std::vector<TreeNode *> s;
    s.push_back(root);
    int i = 0;
    while (i < s.size()) {
        int to = s.size();
        std::vector<int> nums;
        while (i < to) {
            nums.push_back(s[i]->val);
            if (s[i]->left) s.push_back(s[i]->left);
            if (s[i]->right) s.push_back(s[i]->right);
            ++i;
        }
        result.push_back(nums);
    }
    std::reverse(result.begin(), result.end());
    return result;
}
