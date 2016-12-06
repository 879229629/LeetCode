#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;

    std::vector<ListNode *> lists;
    ListNode *node1 = new ListNode(1);
    lists.push_back(node1);

    lists.push_back(nullptr);

    ListNode *newNode = s.mergeKLists(lists);
    while (newNode) {
        std::cout << ", " << newNode->val;
        newNode = newNode->next;
    }
    std::cout << std::endl;
}