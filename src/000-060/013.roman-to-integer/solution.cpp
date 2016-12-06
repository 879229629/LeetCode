#include "solution.h"

#include <unordered_map>
#include <iostream>

int solution::romanToInt(std::string s) {
    std::unordered_map<char, int> mp = {{'I', 1},
                                        {'V', 5},
                                        {'X', 10},
                                        {'L', 50},
                                        {'C', 100},
                                        {'D', 500},
                                        {'M', 1000}};
    int res = 0;
    int i = 0;
    for (i = 0; i < s.length() - 1; ++i) {
        if (mp[s[i]] >= mp[s[i + 1]]) res += mp[s[i]];
        else res -= mp[s[i]];
        std::cout << res << std::endl;
    }
    res += mp[s[i]];
    return res;
}
