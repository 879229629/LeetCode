#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<int> num1 = {0,0,3,0,0,0,0,0,0};
    std::vector<int> num2 = {-1,1,1,1,2,3};
    for (int i = 0; i < num1.size(); ++i) {
        std::cout << num1[i] << "  ";
    }
    std::cout << std::endl;
    for (int i = 0; i < num2.size(); ++i) {
        std::cout << num2[i] << "  ";
    }
    std::cout << std::endl;
    s.merge(num1, 3, num2, 6);

    for (int i = 0; i < num1.size(); ++i) {
        std::cout << num1[i] << "  ";
    }
}