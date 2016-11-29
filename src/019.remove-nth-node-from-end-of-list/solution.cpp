#include "solution.h"

#include <iostream>

ListNode *solution::removeNthFromEnd(ListNode *head, int n) {
    if (n < 0 || head == nullptr) return nullptr;
    ListNode *tailNode = head;
    int len = 1;
    while (tailNode->next) {
        tailNode = tailNode->next;
        ++len;
    }
    int pos = len - n;
    if (pos < 0) return nullptr;
    if (pos == 0) return head->next;
    std::cout << pos << "," << len << std::endl;
    int i = 0;
    ListNode *node = head;
    while (node) {
        if (i == pos - 1) {
            ListNode *find = node->next;
            node->next = find->next;
            delete find;
            break;
        }
        node = node->next;
        ++i;
    }
    return head;
}
