#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;

    ListNode *head = new ListNode({1, 2});
    head->print();
    ListNode *result = s.rotateRight(head, 1);
    if (result) result->print();
}