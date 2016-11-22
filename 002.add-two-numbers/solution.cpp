#include <iostream>
#include "solution.h"

#include <assert.h>
#include <stdlib.h>

#include "list_node.h"

ListNode *solution::addTwoNumbers(ListNode *l1, ListNode *l2) {
    assert(l1 != nullptr);
    assert(l2 != nullptr);
    ListNode *root = new ListNode(0);
    ListNode *target = root;

    ListNode *p1 = l1;
    ListNode *p2 = l2;

    int carry = 0;
    div_t divResult{};

    while (p1 != nullptr || p2 != nullptr || carry > 0) {
        int val(0);
        val += p1 != nullptr ? p1->val : 0;
        val += p2 != nullptr ? p2->val : 0;
        val += divResult.quot;

        divResult = div(val, 10);
        target->next = new ListNode(divResult.rem);
        target = target->next;

        p1 = p1 != nullptr ? p1->next : nullptr;
        p2 = p2 != nullptr ? p2->next : nullptr;
    }

    return root->next;
}