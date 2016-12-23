#include "solution.h"

#include <set>

ListNode *solution::getIntersectionNode(ListNode *headA, ListNode *headB) {
    std::set<ListNode *> s;

    while (headA != nullptr && headB != nullptr) {
        if (s.find(headA) != s.end()) return headA;
        s.insert(headA);
        headA = headA->next;
        if (s.find(headB) != s.end()) return headB;
        s.insert(headB);
        headB = headB->next;
    }

    while (headA != nullptr) {
        if (s.find(headA) != s.end()) return headA;
        s.insert(headA);
        headA = headA->next;
    }

    while (headB != nullptr) {
        if (s.find(headB) != s.end()) return headB;
        s.insert(headB);
        headB = headB->next;
    }
    return nullptr;
}
