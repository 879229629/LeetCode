#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    ListNode *node = new ListNode({-1, 0, 1, 2});
    s.sortedListToBST(node);
}