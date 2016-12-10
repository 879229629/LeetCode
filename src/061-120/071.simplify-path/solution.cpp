#include "solution.h"

#include <stack>
#include <vector>
#include <iostream>

std::string solution::simplifyPath(std::string path) {
    std::vector<std::string> data;
    std::vector<std::string> words;
    int from = 0;
    for (int i = 0; i < path.size(); ++i) {
        if (path[i] == '/') {
            if (from < i) words.push_back(path.substr(from, i - from));
            from = i + 1;
        }
    }
    if (from < path.size()) words.push_back(path.substr(from));
    for (int j = 0; j < words.size(); ++j) {
        if (words[j] == "" || words[j] == ".") continue;
        if (words[j] == ".." && !data.empty()) data.pop_back();
        else if (words[j] != "..") data.push_back(words[j]);
    }
    std::string s;
    for (int k = 0; k < data.size(); ++k) {
        s += "/" + data[k];
    }
    return s.empty() ? "/" : s;
}
