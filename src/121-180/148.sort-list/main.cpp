#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    ListNode *node = new ListNode({2, 6, 5, 8, 1});
    node->print();
    node = s.sortList(node);
    node->print();
}