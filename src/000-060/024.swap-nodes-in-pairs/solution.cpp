#include "solution.h"

#include <iostream>

ListNode *solution::swapPairs(ListNode *head) {
    if (head == nullptr) return nullptr;
    if (head->next == nullptr) return head;
    ListNode *next = head->next;

    head->next = swapPairs(next->next);
    next->next = head;

    return next;
}
