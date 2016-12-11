#include "solution.h"

ListNode *solution::deleteDuplicates(ListNode *head) {
    ListNode *root = new ListNode(0);
    root->next = nullptr;
    ListNode *current = root;

    while (head != nullptr) {
        if (head->next == nullptr || head->val != head->next->val) {
            current->next = head;
            head = head->next;
            current = current->next;
            current->next = nullptr;
        } else {
            do {
                head = head->next;
            } while (head->next != nullptr && head->val == head->next->val);
            head = head->next;
        }
    }
    return root->next;
}
