#include "solution.h"
#include <iostream>
#include <vector>

int solution::numDecodings(std::string s) {
    if (s.empty()) return 0;
    if (s[0] == '0') return 0;
    std::vector<int> nums(s.length() + 1);
    nums[0] = 1;
    nums[1] = 1;

    for (int i = 2; i <= s.length(); ++i) {
        if (s[i - 1] != '0') nums[i] = nums[i - 1];
        char c1 = s[i - 2];
        char c2 = s[i - 1];
        if ((c1 == '1' && '0' <= c2 && c2 <= '9') ||
            (c1 == '2' && '0' <= c2 && c2 <= '6'))
            nums[i] += nums[i - 2];
        if(nums[i]==0) break;
    }
    return nums[s.length()];
}
