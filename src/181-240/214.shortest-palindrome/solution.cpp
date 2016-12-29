#include "solution.h"
#include <iostream>

std::string solution::shortestPalindrome(std::string s) {
    if (s.empty()) return "";
    std::string s1 = s;
    std::reverse(s1.begin(), s1.end());
    std::vector<int> nums = findPre(s + "#" + s1);
    return s1.substr(0, s1.length() - nums[nums.size() - 1]) + s;
}

std::vector<int> solution::findPre(const std::string &s) {
    std::vector<int> p(s.length());
    for (int i = 1; i < s.size(); ++i) {
        int j = p[i - 1];
        std::cout << "begin " << i << ", " << j << " \n";
        while (j > 0 && s[i] != s[j])j = p[j - 1];
        std::cout << "end " <<  i << ", " << j << " \n";
        j += s[i] == s[j];
        p[i] = j;
    }
    return p;
}

std::vector<int> solution::next(const std::string &s) {
    int len = s.length();
    std::vector<int> res(len);
    int k = -1;
    int j = 0;
    res[0] = -1;
    while (j < len) {
//        std::cout << k << "," << j << "\n";
        if (k == -1 || s[k] == s[j]) {
            ++k;
            ++j;
            res[j] = k;
        } else {
            k = res[k];
        }
    }
    return res;
}


int solution::KmpSearch(std::string s1, std::string s2) {
    std::vector<int> res = next(s2);
    int i = 0;
    int j = 0;
    int len1 = s1.length();
    int len2 = s2.length();

    while (i < len1 && j < len2) {
        if (j == -1 || s1[i] == s2[j]) {
            ++i;
            ++j;
        } else {
            j = res[j];
        }
    }
    if (j == len2) return i - j;
    return -1;
}