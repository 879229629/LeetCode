#include "solution.h"

#include <limits.h>

#include <iostream>

int solution::myAtoi(std::string str) {
    int factor = 1;
    bool foundValidCharacter = false;
    long ret = 0;

    int i = 0;
    while (i < str.length()) {
        char ch = str[i++];

        if (ch == ' ' || ch == '+' || ch == '-') {
            if (foundValidCharacter) break;

            if (ch == '-') factor = -1;
            if (ch != ' ') foundValidCharacter = true;

            continue;
        }

        if (ch < '0' || ch > '9') break;
        foundValidCharacter = true;

        ret = ret * factor * 10 + (ch - '0');
        ret = ret * factor;

        if (ret > INT_MAX) {
            ret = INT_MAX;
            break;
        }
        if (ret < INT_MIN) {
            ret = INT_MIN;
            break;
        }
    }
    return static_cast<int>(ret);
}
