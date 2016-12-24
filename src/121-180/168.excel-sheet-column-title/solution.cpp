#include "solution.h"
#include <iostream>

std::string solution::convertToTitle(int n) {
    std::string s;
    while (n > 0) {
        int count = 0;
        int k = n;
        int sum = 1;
        while (k > 26) {
            ++count;
            k = k / 26;
            sum *= 26;
            if (k * sum == n) --k;
        }
        if (s.empty()) s = std::string(count + 1, ' ');
        s[s.length() - count - 1] = char('A' + k - 1);
        n -= k * sum;
    }
    return s;
}
