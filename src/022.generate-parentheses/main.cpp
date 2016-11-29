#include <iostream>
#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    int m = 3;
    auto result = s.generateParenthesis(m);
    for (int i = 0; i < result.size(); ++i) {
        std::cout << result[i] << std::endl;
    }
}