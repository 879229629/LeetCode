#include "solution.h"

#include <iostream>

bool solution::isMatch(char *s, char *p) {
    if (*p == '\0') return *s == '\0';
    std::cout << s << "][" << p << std::endl;
    if (*p == '*') {
        while (*p == '*') ++p;
        while (*s) {
            if (isMatch(s++, p)) return true;
        }
        return isMatch(s++, p);
    } else {
        if (*s == *p || (*p == '?' && *s != '\0')) {
            return isMatch(s + 1, p + 1);
        } else {
            return false;
        }
    }
}
