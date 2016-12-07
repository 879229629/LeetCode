#include "solution.h"

ListNode *solution::rotateRight(ListNode *head, int k) {
    if (head == nullptr) return head;
    int len = 1;
    ListNode *tail = head;
    while (tail->next) {
        tail = tail->next;
        ++len;
    }
    k = k % len;

    if (k == 0) return head;

    int skip = len - k - 1;
    tail->next = head;

    while (skip > 0) {
        --skip;
        head = head->next;
    }

    tail = head;
    head = head->next;
    tail->next = nullptr;
    return head;
}
