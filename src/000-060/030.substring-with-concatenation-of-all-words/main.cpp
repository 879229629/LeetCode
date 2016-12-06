#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::string str = "wordgoodgoodgoodbestword";
    std::vector<std::string> words = {"word", "good", "best", "good"};
    std::vector<int> result = s.findSubstring(str, words);
    std::for_each(result.begin(), result.end(), [](int pos) { std::cout << pos << ", "; });
    std::cout << std::endl;

    std::cout << str.substr(1, 2);
}