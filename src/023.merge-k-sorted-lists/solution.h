#ifndef LEETCODE_023_SOLUTION_H_
#define LEETCODE_023_SOLUTION_H_

#include <vector>

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};

class solution {
public:
    ListNode *mergeKLists(std::vector<ListNode *> &lists);

    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2);

};


#endif // LEETCODE_023_SOLUTION_H_
