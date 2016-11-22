#include <iostream>
#include "solution.h"

#include <assert.h>

#include "list_node.h"

ListNode *solution::addTwoNumbers(ListNode *l1, ListNode *l2) {
    assert(l1 != nullptr);
    assert(l2 != nullptr);
    ListNode *root = nullptr;
    ListNode *target = nullptr;

    ListNode *p1 = l1;
    ListNode *p2 = l2;

    int carry = 0;
    while (p1 != nullptr || p2 != nullptr) {
        int v = carry;
        if (p1 != nullptr) {
            v += p1->val;
            p1 = p1->next;
        }
        if (p2 != nullptr) {
            v += p2->val;
            p2 = p2->next;
        }
        carry = v / 10;
        int num = v % 10;
        ListNode *node = new ListNode(num);

        if (target == nullptr) {
            root = node;
            target = root;
        } else {
            target->next = node;
            target = target->next;
        }
    }
    if (carry > 0 && target != nullptr) {
        ListNode *node = new ListNode(carry);
        target->next = node;
    }

    return root;
}