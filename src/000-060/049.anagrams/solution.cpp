#include "solution.h"

#include <map>

std::vector<std::vector<std::string>> solution::groupAnagrams(std::vector<std::string> &strs) {
    std::sort(strs.begin(), strs.end());

    std::map<std::string, std::vector<std::string>> res;

    for (int i = 0; i < strs.size(); ++i) {
        std::string s = strs[i];
        std::sort(s.begin(), s.end());
        res[s].push_back(strs[i]);
    }

    std::vector<std::vector<std::string>> data;

    for (auto it = res.begin(); it != res.end(); ++it) {
        data.push_back(it->second);
    }
    return data;
}
