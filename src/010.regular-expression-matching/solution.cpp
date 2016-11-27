#include "solution.h"

#include <tuple>
#include <iostream>

bool solution::isMatch(char *s, char *p) {
    if (*p == '\0') return *s == '\0';

    if (*(p + 1) == '*') {
        while (*s == *p || (*p == '.' && *s != '\0')) {
            if (this->isMatch(s++, p + 2)) {
                return true;
            }
        }
        return this->isMatch(s, p + 2);
    } else {
        if (*s == *p || (*p == '.' && *s != '\0')) {
            return this->isMatch(s + 1, p + 1);
        }
        return false;
    }
};
