#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;

    std::vector<int> nums = {1, 2, 3, 4, 5};
    ListNode *node = new ListNode(nums);
    node->print();
    ListNode *newNode = s.reverseKGroup(node, 4);
//    ListNode *newNode = s.reverse(node);
    if (newNode) newNode->print();

    delete node;
    std::cout << "s: " << &s << std::endl;
}