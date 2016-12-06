#include "solution.h"

#include <iostream>

ListNode *solution::removeNthFromEnd(ListNode *head, int n) {
    ListNode *newHead = new ListNode(0);
    newHead->next = head;
    ListNode *p = newHead;
    ListNode *runner = newHead;
    while (n > 0) {
        runner = runner->next;
        n--;
    }
    while (runner->next) {
        runner = runner->next;
        p = p->next;
    }
    ListNode *node = p->next;
    p->next = node->next;

    delete node;
    head = newHead->next;
    delete newHead;
    return head;
}
