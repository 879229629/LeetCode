#include "solution.h"

void solution::deleteNode(ListNode *node) {
    if (!node || !node->next) return;
    int v = node->val;
    while(node->next){
        if(node->val==v){
            node->val=node->next->val;
            node->next=node->next->next;
        }else{
            node=node->next;
        }
    }
}
