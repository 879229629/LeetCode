#include "solution.h"

ListNode *solution::removeElements(ListNode *head, int val) {
    while (head != nullptr && head->val == val) head = head->next;
    if (head == nullptr) return nullptr;
    ListNode *p = head;
    while (head->next != nullptr) {
        if (head->next->val == val) {
            head->next = head->next->next;
        }else {
            head = head->next;
        }
    }
    return p;
}
