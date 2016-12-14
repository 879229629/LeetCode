#ifndef LEETCODE_093_SOLUTION_H_
#define LEETCODE_093_SOLUTION_H_

#include <vector>
#include <string>

class solution {
public:
    std::vector<std::string> restoreIpAddresses(std::string s);

    void dfs(std::vector<std::string> &result, std::string first, std::string second, int count);

    bool valid(std::string);
};


#endif // LEETCODE_093_SOLUTION_H_
