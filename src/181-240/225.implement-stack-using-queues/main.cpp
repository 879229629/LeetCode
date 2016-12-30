#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    s.push(1);
    s.push(2);
    s.push(20);
    s.pop();
    int t = s.top();
    std::cout << "s: " << t << std::endl;
}