#include <iostream>

#include "list_node.h"
#include "solution.h"


int main(int argc, char *argv[]) {
    ListNode *l3 = new ListNode(3);
    ListNode *l2 = new ListNode(4);
    l2->next = l3;
    ListNode *l1 = new ListNode(2);
    l1->next = l2;


    ListNode *r3 = new ListNode(4);
    ListNode *r2 = new ListNode(6);
    r2->next = r3;
    ListNode *r1 = new ListNode(5);
    r1->next = r2;

    solution s;
    ListNode *result = s.addTwoNumbers(l1, r1);
    while (result != nullptr) {
        std::cout << result->val << ", ";
        ListNode *tmp = result;
        result = result->next;
    }
    std::cout << std::endl;

    std::function<int(ListNode *node)> listDelete;
    listDelete = [&listDelete](ListNode *node) -> int {
        if (node == nullptr) {
            return 0;
        }
        listDelete(node->next);
        delete node;
        return 0;
    };

    listDelete(l1);
    listDelete(r1);
    listDelete(result);

    return 0;
}
