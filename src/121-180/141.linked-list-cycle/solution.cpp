#include "solution.h"

bool solution::hasCycle(ListNode *head) {
    if (head == nullptr) return false;
    ListNode *slow = head;
    ListNode *fast = head;
    do {
        if(slow== nullptr||fast== nullptr) return false;
        slow = slow->next;
        fast = fast->next;
        if (fast == nullptr) return false;
        fast = fast->next;
    } while (slow != fast);
    return true;
}
