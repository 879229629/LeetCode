#include <iostream>
#include <vector>
#include "treeNode.h"
#include "listnode.h"
#include "sort.h"

void print(ListNode *n) {
    std::cout << "node: ";
    while (n != nullptr) {
        std::cout << n->val << ", ";
        n = n->next;
    }
    std::cout << std::endl;
}

void print(std::string s, std::vector<int> nums) {
    std::cout << s << std::endl;
    for (int i = 0; i < nums.size(); ++i) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;
}

void treenode() {
    std::vector<int> nums = {1, 2, 3, 4, 5, 999, 6, 999, 999, 7, 999, 8};
    print("原数据:", nums);
    TreeNode *node = new TreeNode(nums);
    nums = node->printByLayer();
    print("层遍历:", nums);

    std::vector<std::vector<int>> result = node->printByLayer2();
    std::cout << "层遍历:\n";
    for (int i = 0; i < result.size(); ++i) {
        for (int j = 0; j < result[i].size(); ++j) {
            std::cout << result[i][j] << " ";
        }
        std::cout << std::endl;
    }

    nums.clear();
    node->printByPreorder(nums);
    print("前序遍历:", nums);

    nums.clear();
    nums = node->printByPreorder2();
    print("前序遍历2:", nums);


    nums.clear();
    node->printByInorder(nums);
    print("中序遍历:", nums);

    nums.clear();
    nums = node->printByInorder2();
    print("中序遍历2:", nums);

    nums.clear();
    node->printByPostorder(nums);
    print("后序遍历:", nums);

    nums.clear();
    nums = node->printByPostorder2();
    print("后序遍历2:", nums);
}

void listnode() {
    ListNode *node = new ListNode({3, 7, 3, 1, 7, 9, 10});
    node->print();
    ListNode *n = node->insertionSortList(node);
    n->print();
}

void sort() {
    std::vector<int> nums = {3, 3, 4, 56, 62, 3};
    print("原始:", nums);
    bubble_sort(nums);
    print("冒泡:", nums);
}

int main() {
    sort();
}