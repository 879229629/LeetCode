#include "solution.h"

#include <vector>

bool solution::isAnagram(std::string s, std::string t) {
    if (s.length() != t.length()) return false;
    std::vector<int> nums(26);
    for (int i = 0; i < s.length(); ++i) {
        ++nums[s[i] - 'a'];
        --nums[t[i] - 'a'];
    }
    for (int j = 0; j < 26; ++j) {
        if (nums[j] != 0) return false;
    }
    return true;
}
