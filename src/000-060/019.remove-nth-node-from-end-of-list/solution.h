#ifndef LEETCODE_019_SOLUTION_H_
#define LEETCODE_019_SOLUTION_H_

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(nullptr) {}
};

class solution {
public:


    ListNode *removeNthFromEnd(ListNode *head, int n);
};


#endif // LEETCODE_019_SOLUTION_H_
