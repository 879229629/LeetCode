#ifndef LEETCODE_131_SOLUTION_H_
#define LEETCODE_131_SOLUTION_H_

#include <vector>
#include <string>

class solution {
public:
    std::vector<std::vector<std::string>> partition(std::string s);

    void helper(std::vector<std::vector<std::string>> &result,
                std::vector<std::string> &words, const std::string &s, int pos);

    bool isPalindrome(std::string s);
};


#endif // LEETCODE_131_SOLUTION_H_
