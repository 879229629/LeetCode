#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    int i = -1001;
    bool b = s.isPalindrome(i);
    std::cout << "number: [" << i << "][" << b << "]" << std::endl;

    int x = INT_MIN+1;
    std::cout << x << "][" << -x << "]" << std::endl;
}