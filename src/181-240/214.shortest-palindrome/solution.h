#ifndef LEETCODE_214_SOLUTION_H_
#define LEETCODE_214_SOLUTION_H_

#include <string>
#include <vector>

class solution {
public:
    std::string shortestPalindrome(std::string s);


    std::vector<int> findPre(const std::string &s);

    std::vector<int> next(const std::string &s);


    int KmpSearch(std::string s1, std::string s2);
};


#endif // LEETCODE_214_SOLUTION_H_
