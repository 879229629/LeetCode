#include "solution.h"

ListNode *solution::partition(ListNode *head, int x) {
    ListNode *firstRoot = new ListNode(0);
    ListNode *first = firstRoot;

    ListNode *secondRoot = new ListNode(0);
    ListNode *second = secondRoot;

    while (head != nullptr) {
        if (head->val < x) {
            first->next = head;
            first = first->next;
        } else {
            second->next = head;
            second = second->next;
        }
        head = head->next;
    }

    second->next = nullptr;
    first->next = secondRoot->next;
    return firstRoot->next;
}
