#ifndef LEETCODE_021_SOLUTION_H_
#define LEETCODE_021_SOLUTION_H_

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(nullptr) {}
};

class solution {
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2);
};


#endif // LEETCODE_021_SOLUTION_H_
