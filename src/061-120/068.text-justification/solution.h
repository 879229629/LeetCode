#ifndef LEETCODE_068_SOLUTION_H_
#define LEETCODE_068_SOLUTION_H_

#include <vector>
#include <string>

class solution {
public:
    std::vector<std::string> fullJustify(std::vector<std::string> &words, int maxWidth);

    std::string help(std::vector<std::string> &words, int from, int to, int sum, int maxWidth, bool last);
};


#endif // LEETCODE_068_SOLUTION_H_
