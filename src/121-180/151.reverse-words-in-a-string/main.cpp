#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::string word = " 2  dswd  ddd  dd S dw ";
    s.reverseWords(word);
    std::cout << "[" << word << "]" << word.length() << std::endl;
}