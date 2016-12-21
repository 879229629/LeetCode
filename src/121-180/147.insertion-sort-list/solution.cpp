#include "solution.h"

ListNode *solution::insertionSortList(ListNode *head) {
    ListNode *root = new ListNode(0);
    while (head != nullptr) {
        ListNode *node = head;
        head = head->next;
        ListNode *p = root;
        while (p->next != nullptr && p->next->val <= node->val) p = p->next;
        node->next = p->next;
        p->next = node;
    }
    return root->next;
}
