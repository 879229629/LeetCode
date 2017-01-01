#include "solution.h"

void solution::deleteNode(ListNode *node) {
    *node = *node->next;
}
