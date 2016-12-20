#ifndef LEETCODE_140_SOLUTION_H_
#define LEETCODE_140_SOLUTION_H_

#include <vector>
#include <string>
#include <unordered_set>

class solution {
public:
    std::vector<std::string> wordBreak(std::string s, std::unordered_set<std::string> &wordDict);

    void help(
            std::vector<std::string> &result,
            const std::string &s,
            int pos,
            std::string word,
            const std::vector<bool> &r,
            const std::unordered_set<std::string> &wordDict);
};

#endif // LEETCODE_140_SOLUTION_H_
