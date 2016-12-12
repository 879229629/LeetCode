#include <iostream>
#include "solution.h"

int main(int argc, char *argv[]) {
    ListNode *node = new ListNode({2, 1});
    node->print();
    solution s;
    ListNode *r = s.partition(node, 2);
    if (r) r->print();
}