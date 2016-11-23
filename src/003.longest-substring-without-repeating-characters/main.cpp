#include <assert.h>

#include <iostream>

#include "solution.h"

int test(std::string str, int len) {
    solution s;
    int ans = s.lengthOfLongestSubstring(str);
    std::cout << "str: [" << str << "] len: [" << len << "], result: [" << ans << "]" << std::endl;
    assert(len == ans);
    return 0;
}

int main(int argc, char *argv[]) {
    test("a", 1);
    test("aab", 2);
    test("dvdf", 3);
    test("abcabcbb", 3);
}