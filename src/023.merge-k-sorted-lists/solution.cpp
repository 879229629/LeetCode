#include "solution.h"

#include <iostream>

ListNode *solution::mergeKLists(std::vector<ListNode *> &lists) {
    if (lists.empty()) return nullptr;
    int end = lists.size() - 1;
    while (end > 0) {
        int i = 0;
        int j = end;
        while (i < j) {
            lists[i] = mergeTwoLists(lists[i], lists[j]);
            ++i;
            --j;
        }
        end = i == j ? i : i - 1;
    }
    return lists[0];
}

ListNode *solution::mergeTwoLists(ListNode *l1, ListNode *l2) {
    if (l1 == nullptr) return l2;
    if (l2 == nullptr) return l1;
    ListNode node(0);
    ListNode *current = &node;
    while (l1 != nullptr || l2 != nullptr) {
        if (l1 == nullptr) {
            current->next = l2;
            break;
        }
        if (l2 == nullptr) {
            current->next = l1;
            break;
        }
        ListNode *tmp = nullptr;
        if (l1->val <= l2->val) {
            tmp = l1;
            l1 = l1->next;

        } else {
            tmp = l2;
            l2 = l2->next;
        }
        current->next = tmp;
        current = current->next;
        current->next = nullptr;
    }
    return node.next;
}
