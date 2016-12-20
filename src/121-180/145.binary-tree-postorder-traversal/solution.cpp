#include "solution.h"


std::vector<int> solution::postorderTraversal(TreeNode *root) {
    std::vector<int> nums;
    std::vector<std::pair<TreeNode *, bool >> s;
    s.push_back(std::make_pair(root, false));

    while (!s.empty()) {
        TreeNode *p = s.back().first;
        bool b = s.back().second;
        s.pop_back();
        if (p == nullptr) continue;
        if (b) nums.push_back(p->val);
        else {
            s.push_back(std::make_pair(p, true));
            s.push_back(std::make_pair(p->right, false));
            s.push_back(std::make_pair(p->left, false));
        }
    }
    return nums;
}
