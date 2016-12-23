#include "solution.h"

#include <set>

ListNode *solution::getIntersectionNode(ListNode *headA, ListNode *headB) {
    ListNode *c1 = headA;
    ListNode *c2 = headB;
    while (c1 != c2) {
        c1 = c1 ? c1->next : headB;
        c2 = c2 ? c2->next : headA;
    }
    return c1;
}
