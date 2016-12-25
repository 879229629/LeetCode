#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<std::string> res = s.findRepeatedDnaSequences("AAAAAAAAAAAA");
    for (int i = 0; i < res.size(); ++i) {
        std::cout << res[i] << "  ";
    }
}