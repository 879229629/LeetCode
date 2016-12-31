#include "solution.h"

bool solution::isPalindrome(ListNode *head) {
    if (!head || !head->next) return true;
    ListNode *slow = head;
    ListNode *fast = head;
    int k = 0;
    while (fast->next && fast->next->next) {
        slow = slow->next;
        fast = fast->next->next;
        ++k;
    }
    ListNode *second = slow->next;
    if (!fast->next) --k;
    while (k >= 0) {
        ListNode *first = head;
        int i = 0;
        while (++i <= k) first = first->next;
        if (first->val != second->val) return false;
        second = second->next;
        --k;
    }
    return true;
}
