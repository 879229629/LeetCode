#include "solution.h"

TreeNode *solution::sortedListToBST(ListNode *head) {
    return helper(head, nullptr);
}

TreeNode *solution::helper(ListNode *head, ListNode *tail) {
    if (head == tail) return nullptr;
    if (head->next == tail) {
        TreeNode *root = new TreeNode(head->val);
        return root;
    }
    ListNode *mid = head;
    ListNode *tmp = head;
    while (mid != tail && tmp != nullptr && tmp != tail && tmp->next != tail) {
        mid = mid->next;
        tmp = tmp->next->next;
    }
    TreeNode *root = new TreeNode(mid->val);
    root->left = helper(head, mid);
    root->right = helper(mid->next, tail);
    return root;
}
