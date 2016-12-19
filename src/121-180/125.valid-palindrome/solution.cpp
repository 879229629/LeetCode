#include "solution.h"
#include <stdlib.h>

bool solution::isPalindrome(std::string s) {
    if (s.empty()) return true;
    int i = 0;
    int j = s.size() - 1;

    while (i < j) {
        if (!isalnum(s[i])) ++i;
        else if (!isalnum(s[j])) --j;
        else {
            if (tolower(s[i]) != tolower(s[j])) return false;
            ++i;
            --j;
        }
    }
    return true;
}
