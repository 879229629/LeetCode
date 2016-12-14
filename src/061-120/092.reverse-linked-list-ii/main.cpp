#include <iostream>
#include <vector>

#include "solution.h"

int main(int argc, char *argv[]) {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    solution s;
    ListNode *node = new ListNode(nums);
    node->print();

    ListNode *newNode = s.reverseBetween(node, 4, 4);
    if (newNode) newNode->print();
}