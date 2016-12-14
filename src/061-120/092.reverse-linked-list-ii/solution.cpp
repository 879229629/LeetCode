#include "solution.h"
#include <iostream>

ListNode *solution::reverseBetween(ListNode *head, int m, int n) {
    ListNode *root = new ListNode(0);
    ListNode *current = root;

    int i = 1;
    while (head != nullptr && i < m) {
        current->next = head;
        head = head->next;
        current = current->next;
        current->next = nullptr;
        ++i;
    }

    ListNode *node = nullptr;
    while (head != nullptr && i <= n) {
        ListNode *tmp = head;
        head = head->next;
        tmp->next = node;
        node = tmp;
        ++i;
    }
    current->next = node;

    while (current->next != nullptr) current = current->next;
    current->next = head;
    return root->next;
}
