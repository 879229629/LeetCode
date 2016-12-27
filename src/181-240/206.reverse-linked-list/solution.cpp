#include "solution.h"

ListNode *solution::reverseList(ListNode *head) {
    ListNode *newHead = nullptr;

    while (head != nullptr) {
        ListNode * tmp = head;
        head = head->next;

        tmp->next = newHead;
        newHead = tmp;
    }
    return newHead;
}
