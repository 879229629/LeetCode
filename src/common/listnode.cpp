#include "listnode.h"

#include <assert.h>

#include <iostream>

ListNode::ListNode(int x) {
    val = x;
    next = nullptr;
}

ListNode::ListNode(std::vector<int> nums) {
    assert(!nums.empty());
    val = nums[0];
    next = nullptr;

    ListNode *nextNode = nullptr;
    for (int i = nums.size() - 1; i > 0; --i) {
        ListNode *node = new ListNode(nums[i]);
        if (nextNode == nullptr) {
            nextNode = node;
        } else {
            node->next = nextNode;
            nextNode = node;
        }
    }
    next = nextNode;
}

ListNode::~ListNode() {
    if (next != nullptr) delete next;
}

void ListNode::print() {
    std::cout << "node: ";
    ListNode *n = this;
    while (n != nullptr) {
        std::cout << n->val << ", ";
        n = n->next;
    }
    std::cout << std::endl;
}
