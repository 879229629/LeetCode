#ifndef LEETCODE_022_SOLUTION_H_
#define LEETCODE_022_SOLUTION_H_

#include <vector>
#include <string>

class solution {
public:
    std::vector<std::string> generateParenthesis(int n);

    void generate(int left, int right, std::string s, int n, std::vector<std::string> &result);

};


#endif // LEETCODE_022_SOLUTION_H_
