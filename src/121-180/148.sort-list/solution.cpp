#include "solution.h"

#include <iostream>

ListNode *solution::sortList(ListNode *head) {
    if (head == nullptr || head->next == nullptr) return head;
    ListNode *slow = head;
    ListNode *fast = head;
    ListNode *p = head;

    while (fast != nullptr && fast->next != nullptr) {
        p = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    p->next = nullptr;

    ListNode *s1 = sortList(head);
    ListNode *s2 = sortList(slow);

    return merge(s1, s2);
}

ListNode *solution::merge(ListNode *s1, ListNode *s2) {
    ListNode *root = new ListNode(0);
    ListNode *cur = root;

    while (s1 != nullptr && s2 != nullptr) {
        if (s1->val < s2->val) {
            cur->next = s1;
            s1 = s1->next;
            cur = cur->next;
        } else {
            cur->next = s2;
            s2 = s2->next;
            cur = cur->next;
        }
    }

    while (s1 != nullptr) {
        cur->next = s1;
        s1 = s1->next;
        cur = cur->next;
    }

    while (s2 != nullptr) {
        cur->next = s2;
        s2 = s2->next;
        cur = cur->next;
    }

    return root->next;
}
