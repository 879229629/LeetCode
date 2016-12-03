#include "solution.h"

#include <cassert>
#include <cstdlib>

std::string solution::countAndSay(int n) {
    assert(n > 0);
    if (n == 1) return "1";
    std::string origin = countAndSay(n - 1);
    std::string result = "";
    int i = 0;
    int j = i + 1;
    while (j < origin.length()) {
        if (origin[j] == origin[i]) {
            ++j;
        } else {
            int cout = j - i;
            result += std::string(1, cout + '0') + std::string(1, origin[i]);
            i = j;
            ++j;
        }
    }

    if (j > i) {
        int cout = j - i;
        result += std::string(1, cout + '0') + std::string(1, origin[i]);
    }
    return result;
}
