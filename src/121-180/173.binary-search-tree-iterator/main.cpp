#include <iostream>

#include "BSTIterator.h"

int main(int argc, char *argv[]) {
    std::vector<int> nums = {2, 999, 3};
    TreeNode *node = new TreeNode(nums);
    BSTIterator *it = new BSTIterator(node);
    while (it->hasNext()) std::cout << it->next() << " ";

}