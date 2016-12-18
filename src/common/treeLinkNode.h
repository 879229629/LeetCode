#ifndef LEETCODE_TREELINKNODE_H
#define LEETCODE_TREELINKNODE_H


class TreeLinkNode {
public:
    int val;
    TreeLinkNode *left, *right, *next;

    TreeLinkNode(int x) : val(x), left(nullptr), right(nullptr), next(nullptr) {}
};

#endif //LEETCODE_TREELINKNODE_H
