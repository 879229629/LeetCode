#include "solution.h"

#include <iostream>

bool solution::isMatch(char *s, char *p) {
    if (*p == '\0') return *s == '\0';

    char *s1 = NULL;
    char *p1 = NULL;
    bool found = false;
    while (*s != '\0') {
        if (*p == '?') {
            ++s;
            ++p;
        } else if (*p == '*') {
            found = true;
            s1 = s;
            p1 = ++p;
        } else {
            if (*s == *p) {
                ++s;
                ++p;
            } else if (found) {
                s = ++s1;
                p = p1;
            } else {
                return false;
            }
        }
    }
    while (*p == '*') ++p;
    return *p == '\0';
}
