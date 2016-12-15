#include "treeNode.h"
#include <iostream>
#include <queue>
#include <stack>
#include <utility>

const int nullVal = 999;

TreeNode::TreeNode(std::vector<int> nums) {
    left = nullptr;
    right = nullptr;
    val = 0;
    if (nums.empty() || nums[0] == nullVal) return;
    val = nums[0];

    std::queue<TreeNode *> q;
    q.push((TreeNode *&&) this);

    int i = 1;
    while (!q.empty() && i < nums.size()) {
        TreeNode *node = q.front();
        q.pop();

        if (i < nums.size() && nums[i] != nullVal) {
            TreeNode *l = new TreeNode(nums[i]);
            node->left = l;
            q.push(l);
        }
        ++i;

        if (i < nums.size() && nums[i] != nullVal) {
            TreeNode *l = new TreeNode(nums[i]);
            node->right = l;
            q.push(l);
        }
        ++i;
    }
}

std::vector<int> TreeNode::printByLayer() {
    std::vector<int> nums;
    std::queue<TreeNode *> q;
    q.push((TreeNode *&&) this);

    while (!q.empty()) {
        TreeNode *node = q.front();
        q.pop();
        if (node) nums.push_back(node->val);

        if (node->left) q.push(node->left);
        if (node->right) q.push(node->right);
    }
    return nums;
}

std::vector<std::vector<int>> TreeNode::printByLayer2() {
    std::vector<std::vector<int>> result;
    std::vector<TreeNode *> s;
    s.push_back((TreeNode *&&) this);
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
    return result;
}

//首先访问根结点然后遍历左子树，最后遍历右子树
void TreeNode::printByPreorder(std::vector<int> &nums) {
    nums.push_back(this->val);
    if (this->left) this->left->printByPreorder(nums);
    if (this->right) this->right->printByPreorder(nums);
}

std::vector<int> TreeNode::printByPreorder2() {
    std::vector<int> nums;

    std::stack<TreeNode *> stack;
    TreeNode *node = this;

    while (node != nullptr || !stack.empty()) {
        while (node != nullptr) {
            nums.push_back(node->val);
            stack.push(node);
            node = node->left;
        }
        if (!stack.empty()) {
            node = stack.top();
            stack.pop();
            node = node->right;
        }

    }
    return nums;
}

// 首先遍历左子树，然后访问根结点，最后遍历右子树
void TreeNode::printByInorder(std::vector<int> &nums) {
    if (this->left) this->left->printByInorder(nums);
    nums.push_back(this->val);
    if (this->right) this->right->printByInorder(nums);
}

std::vector<int> TreeNode::printByInorder2() {
    std::vector<int> nums;
    std::stack<TreeNode *> stack;
    TreeNode *node = this;

    while (node != nullptr || !stack.empty()) {
        while (node != nullptr) {
            stack.push(node);
            node = node->left;
        }
        if (!stack.empty()) {
            node = stack.top();
            nums.push_back(node->val);
            stack.pop();
            node = node->right;
        }

    }
    return nums;
}

// 首先遍历左子树，然后遍历右子树，最后访问根结点
void TreeNode::printByPostorder(std::vector<int> &nums) {
    if (this->left) this->left->printByPostorder(nums);
    if (this->right) this->right->printByPostorder(nums);
    nums.push_back(this->val);
}

std::vector<int> TreeNode::printByPostorder2() {
    std::stack<std::pair<TreeNode *, bool> > s;
    TreeNode *root = this;
    s.push(std::make_pair(root, false));
    std::vector<int> nums;

    while (!s.empty()) {
        root = s.top().first;
        bool visited = s.top().second;
        s.pop();
        if (root == nullptr) continue;
        if (visited) nums.push_back(root->val);
        else {
            s.push(std::make_pair(root, true));
            s.push(std::make_pair(root->right, false));
            s.push(std::make_pair(root->left, false));
        }
    }
    return nums;
}
