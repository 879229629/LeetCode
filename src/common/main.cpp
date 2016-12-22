#include <iostream>
#include <vector>
#include "treeNode.h"
#include "listnode.h"
#include "sort.h"


#define container_of(ptr, type, member) ({ \
     const typeof( ((type *)0)->member ) *__mptr = (ptr); \
     (type *)( (char *)__mptr - offsetof(type,member) );})

void print(ListNode *n) {
    std::cout << "node: ";
    while (n != nullptr) {
        std::cout << n->val << ", ";
        n = n->next;
    }
    std::cout << std::endl;
}

void print(std::string s, std::vector<int> nums) {
    std::cout << s << std::endl;
    for (int i = 0; i < nums.size(); ++i) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;
}

void treenode() {
    std::vector<int> nums = {1, 2, 3, 4, 5, 999, 6, 999, 999, 7, 999, 8};
    print("原数据:", nums);
    TreeNode *node = new TreeNode(nums);
    nums = node->printByLayer();
    print("层遍历:", nums);

    std::vector<std::vector<int>> result = node->printByLayer2();
    std::cout << "层遍历:\n";
    for (int i = 0; i < result.size(); ++i) {
        for (int j = 0; j < result[i].size(); ++j) {
            std::cout << result[i][j] << " ";
        }
        std::cout << std::endl;
    }

    nums.clear();
    node->printByPreorder(nums);
    print("前序遍历:", nums);

    nums.clear();
    nums = node->printByPreorder2();
    print("前序遍历2:", nums);


    nums.clear();
    node->printByInorder(nums);
    print("中序遍历:", nums);

    nums.clear();
    nums = node->printByInorder2();
    print("中序遍历2:", nums);

    nums.clear();
    node->printByPostorder(nums);
    print("后序遍历:", nums);

    nums.clear();
    nums = node->printByPostorder2();
    print("后序遍历2:", nums);
}

void listnode() {
    ListNode *node = new ListNode({3, 7, 3, 1, 7, 9, 10});
    node->print();
    ListNode *n = node->insertionSortList(node);
    n->print();
}

void sort() {
    std::vector<int> nums = {3, 122, 4, 56, 62, 3};
    print("原始:", nums);
    heapSort(nums);
    print("堆排序:", nums);
}

struct A {
    std::string s;
    short c;
    int d;
};

struct B {
    A a;
    char c;
};

void test() {
    std::cout << "char:" << sizeof(char) << "\n";
    std::cout << "unsigned char:" << sizeof(unsigned char) << "\n";
    std::cout << "short:" << sizeof(short) << "\n";
    std::cout << "int:" << sizeof(int) << "\n";
    std::cout << "unsigned int:" << sizeof(unsigned int) << "\n";
    std::cout << "float:" << sizeof(float) << "\n";
    std::cout << "double:" << sizeof(double) << "\n";
    std::cout << "long:" << sizeof(long) << "\n";
    std::cout << "long long:" << sizeof(long long) << "\n";
    std::cout << "string:" << sizeof(std::string) << "\n";
    std::cout << "nullptr:" << sizeof(nullptr) << "\n";

    std::cout << "A:" << sizeof(A) << "\n";
    std::cout << "A d:" << offsetof(A, d) << "\n";
    std::cout << "B:" << sizeof(B) << "\n";
}

int main() {
    test();

}