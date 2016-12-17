#ifndef LEETCODE_109_SOLUTION_H_
#define LEETCODE_109_SOLUTION_H_

#include "../../common/listnode.h"
#include "../../common/treeNode.h"

class solution {
public:
    TreeNode *sortedListToBST(ListNode *head);

    TreeNode *helper(ListNode *head, ListNode *tail);
};


#endif // LEETCODE_109_SOLUTION_H_
