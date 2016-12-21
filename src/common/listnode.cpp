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

ListNode *ListNode::insertionSortList(ListNode *head) {
    ListNode *root = new ListNode(0);
    while (head != nullptr) {
        ListNode *node = head;
        head = head->next;
        node->next = nullptr;
        ListNode *p = root;
        while (p->next != nullptr && p->next->val <= node->val) p = p->next;
        node->next = p->next;
        p->next = node;
    }
    return root->next;
}