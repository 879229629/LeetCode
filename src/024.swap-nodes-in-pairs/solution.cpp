#include "solution.h"

#include <iostream>

ListNode *solution::swapPairs(ListNode *head) {
    if (head == nullptr) return nullptr;
    if (head->next == nullptr) return head;
    ListNode *newHead = head->next;

    ListNode *l = nullptr;
    ListNode *r = head;
    while (r) {
        ListNode *nextNode = r->next;
        if (!nextNode) break;
        if (l) {
            l->next = nextNode;
        } else {
            l = nextNode;
        }
        r->next = nextNode->next;
        nextNode->next = r;
        l = r;
        r = r->next;
    }
    return newHead;
}
