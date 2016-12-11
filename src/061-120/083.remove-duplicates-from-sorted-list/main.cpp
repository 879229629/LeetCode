#include <iostream>
#include <vector>

#include "solution.h"

int main(int argc, char *argv[]) {
    std::vector<int> nums = {1, 1};
    ListNode *head = new ListNode(nums);
    if (head) head->print();
    solution s;
    head = s.deleteDuplicates(head);
    if (head) head->print();
}