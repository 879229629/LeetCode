#include "solution.h"

#include <iostream>

std::vector<std::string> solution::fullJustify(std::vector<std::string> &words, int maxWidth) {
    int len = words.size();
    std::vector<std::string> result;
    int sum = 0;
    int from = 0;
    for (int i = 0; i < len; ++i) {
        if (sum + words[i].length() + (i - from) * 1 > maxWidth) {
            std::string s = help(words, from, i, sum, maxWidth, false);
            result.push_back(s);
            from = i;
            sum = 0;
        }
        sum += words[i].length();
    }
    if (sum > 0 || from < len) {
        std::string s = help(words, from, len, sum, maxWidth, true);
        result.push_back(s);
    }
    return result;
}


std::string solution::help(std::vector<std::string> &words, int from, int to, int sum, int maxWidth, bool last) {
    int space = 0;
    int count = 0;
    if (last) {
        space = 1;
        count = 0;
    } else {
        int len = to - from - 1;
        space = len > 0 ? (maxWidth - sum) / len : maxWidth - sum;
        count = len > 0 ? ((maxWidth - sum) - space * len) : 0;
    }
    std::cout << from << "," << to << "," << sum << "," << maxWidth << "," << space << "," << count << std::endl;
    std::string s;

    int i = from;
    while (i < to) {
        if (i > from) {
            int n = space;
            if (i - from <= count) ++n;
            s += std::string(n, ' ');
        }
        s += words[i];
        ++i;
    }
    if (s.size() < maxWidth) s += std::string(maxWidth - s.size(), ' ');;
    return s;
}