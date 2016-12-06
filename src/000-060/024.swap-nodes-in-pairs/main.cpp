#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;

    std::vector<int> nums = {1, 2, 3, 4, 5};
    ListNode *node = new ListNode(nums);
    node->print();
    ListNode *newNode = s.swapPairs(node);
    if (newNode) newNode->print();

    delete node;
}