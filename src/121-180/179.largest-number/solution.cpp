#include "solution.h"

std::string solution::largestNumber(std::vector<int> &nums) {
    std::vector<std::string> s(nums.size());
    for (int i = 0; i < nums.size(); ++i) s[i] = std::to_string(nums[i]);
    std::sort(s.begin(), s.end(), [](std::string s1, std::string s2) -> bool {
        return s1 + s2 > s2 + s1;
    });
    std::string res;
    for (auto &e :s) res += e;
    while (res[0] == '0' && res.length() > 1) res.erase(0, 1);
    return res;
}
