#include <iostream>

#include "solution.h"


int main(int argc, char *argv[]) {
    solution s;
    ListNode *node5 = new ListNode(5);
    ListNode *node4 = new ListNode(4);
    node4->next = node5;
    ListNode *node3 = new ListNode(3);
    node3->next = node4;
    ListNode *node2 = new ListNode(2);
    node2->next = node3;
    ListNode *node1 = new ListNode(1);
    node1->next = node2;

    ListNode *node = node1;

    while (node) {
        std::cout << ", " << node->val;
        node = node->next;
    }
    std::cout << std::endl;

    int target = 4;
    ListNode *newNode = s.removeNthFromEnd(node1, target);
    while (newNode) {
        std::cout << ", " << newNode->val;
        newNode = newNode->next;
    }
    std::cout << std::endl;

}