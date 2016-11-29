#ifndef LEETCODE_LISTNODE_H_
#define LEETCODE_LISTNODE_H_

#include <vector>

class ListNode {
public:
    int val;
    ListNode *next;

    ListNode(int x);

    ListNode(std::vector<int> nums);

    ~ListNode();

    void print();
};


#endif //LEETCODE_LISTNODE_H_
