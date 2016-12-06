#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::string str = "2345";
    auto result = s.letterCombinations(str);
    std::cout << "str: " << str << std::endl;
    std::for_each(result.begin(), result.end(), [](std::string s) { std::cout << s << ","; });
}