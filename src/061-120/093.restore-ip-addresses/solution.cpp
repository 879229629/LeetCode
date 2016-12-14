#include "solution.h"
#include <iostream>

std::vector<std::string> solution::restoreIpAddresses(std::string s) {
    std::vector<std::string> result;
    dfs(result, "", s, 0);
    return result;
}

void solution::dfs(std::vector<std::string> &result, std::string first, std::string second, int count) {
    if (second.length() < (4 - count) || (4 - count) * 3 < second.length()) return;
    if (count == 3 && valid(second)) {
        result.push_back(first + second);
    }
    for (int i = 1; i <= 3 && i < second.length(); ++i) {
        std::string ip = second.substr(0, i);
        if (!valid(ip)) continue;
        dfs(result, first + ip + ".", second.substr(i), count + 1);
    }
}

bool solution::valid(std::string ip) {
    if (ip[0] == '0') return ip == "0";
    int n = std::stoi(ip);
    return 0 < n && n < 256;
}