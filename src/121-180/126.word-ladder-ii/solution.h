#ifndef LEETCODE_126_SOLUTION_H_
#define LEETCODE_126_SOLUTION_H_

#include <vector>
#include <string>
#include <unordered_set>

class solution {
public:
    std::vector<std::vector<std::string>> findLadders(
            std::string beginWord,
            std::string endWord,
            std::unordered_set<std::string> &wordList);

    void helper(
            std::vector<std::vector<std::string>> &result,
            std::string beginWord,
            std::string endWord,
            std::vector<std::string> words,
            std::unordered_set<std::string> wordList);

    bool canReach(std::string beginWord,
                  std::string endWord);
};


#endif // LEETCODE_126_SOLUTION_H_
