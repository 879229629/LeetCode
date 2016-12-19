#include "solution.h"

std::vector<std::vector<std::string>> solution::findLadders(
        std::string beginWord,
        std::string endWord,
        std::unordered_set<std::string> &wordList) {
    std::vector<std::vector<std::string>> result;
    std::vector<std::string> words;
    helper(result, beginWord, endWord, {}, wordList);
    return {};
}

void solution::helper(
        std::vector<std::vector<std::string>> &result,
        std::string beginWord,
        std::string endWord,
        std::vector<std::string> words,
        std::unordered_set<std::string> wordList) {
    if(canReach(beginWord,endWord)) {
        words.push_back(beginWord);
        words.push_back(endWord);
        result.push_back(words);
        return;
    }


}


bool solution::canReach(std::string beginWord, std::string endWord) {
    return true;
}
