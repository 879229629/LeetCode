#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    ListNode *node5 = new ListNode(5);
    ListNode *node4 = new ListNode(4);
    node4->next = node5;
    ListNode *node3 = new ListNode(3);
    node3->next = node4;
    ListNode *node2 = new ListNode(2);
    node2->next = node3;
    ListNode *node1 = new ListNode(1);
    node1->next = node2;

    ListNode *node15 = new ListNode(5);
    ListNode *node14 = new ListNode(4);
    node14->next = node15;
    ListNode *node13 = new ListNode(3);
    node13->next = node14;
    ListNode *node12 = new ListNode(2);
    node12->next = node13;
    ListNode *node11 = new ListNode(1);
    node11->next = node12;

    solution s;

    auto newNode = s.mergeTwoLists(node1, node11);
    while (newNode) {
        std::cout << ", " << newNode->val;
        newNode = newNode->next;
    }
    std::cout << std::endl;

}