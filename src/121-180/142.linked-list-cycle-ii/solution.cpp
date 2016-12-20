#include "solution.h"

ListNode *solution::detectCycle(ListNode *head) {
    ListNode *slow = head;
    ListNode *fast = head;
    ListNode *p = nullptr;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            fast = head;
            while (fast != slow) {
                fast = fast->next;
                slow = slow->next;
            }
            p = fast;
            break;
        }
    }
    return p;
}
