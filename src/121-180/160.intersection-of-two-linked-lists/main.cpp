#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    s.getIntersectionNode(nullptr, nullptr);
    std::cout << "s: " << &s << std::endl;
}