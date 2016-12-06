#include "solution.h"

#include <iostream>

ListNode *solution::reverseKGroup(ListNode *head, int k) {
    if (!head || !head->next || k < 1) return head;

    ListNode *l = head;
    int i = 1;
    while (i < k && l) {
        ++i;
        l = l->next;
    }
    if (i < k || !l) return head;

    ListNode *newBegin = l->next;
    l->next = nullptr;
    head = reverse(head);
    l = head;
    while (l->next) {
        l = l->next;
    }
    l->next = reverseKGroup(newBegin, k);
    return head;
}

ListNode *solution::reverse(ListNode *head) {
    if (!head || !head->next) return head;

    ListNode *last = head;
    while (last->next && last->next->next) {
        last = last->next;
    }

    ListNode *newNode = last->next;
    last->next = nullptr;

    newNode->next = reverse(head);
    return newNode;
}
