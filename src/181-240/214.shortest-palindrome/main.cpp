#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::string str = "aacecaaa";
    std::cout << "s: " << s.shortestPalindrome(str) << std::endl;

    std::vector<int> nums = s.findPre("aacecaaa#aaacecaa");
    for (int i = 0; i < nums.size(); ++i) {
        std::cout << nums[i] << "  ";
    }
//    std::cout << "s: " << s.KmpSearch("abcd", "bcd") << std::endl;
}