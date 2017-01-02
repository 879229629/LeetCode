#include <iostream>
#include <vector>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<int> res = s.diffWaysToCompute("2-1-1");
    for (int i = 0; i < res.size(); ++i) {
        std::cout << res[i] << "  ";
    }
}