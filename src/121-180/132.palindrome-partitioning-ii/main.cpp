#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::string word = "aab";
    int ret = s.minCut(word);
    std::cout << "s: [" << word << "][" << ret << std::endl;
}