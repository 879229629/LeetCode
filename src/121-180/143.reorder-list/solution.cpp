#include "solution.h"

#include <vector>

void solution::reorderList(ListNode *head) {
    if (head == nullptr) return;
    std::vector<ListNode *> nodes;
    while (head != nullptr) {
        nodes.push_back(head);
        head = head->next;
    }
    head = nodes[0];
    int i = 1;
    int j = nodes.size() - 1;
    while (i <= j) {
        if (i == j) {
            head->next = nodes[i];
            head = head->next;
        } else {
            head->next = nodes[j];
            head = head->next;
            head->next = nodes[i];
            head = head->next;
        }
        ++i;
        --j;
    }
    head->next = nullptr;
    return;
}
