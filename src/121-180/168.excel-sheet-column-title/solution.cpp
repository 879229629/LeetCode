#include "solution.h"
#include <iostream>

std::string solution::convertToTitle(int n) {
    std::string s;
    while (n > 0) {
        n -= 1;
        s = char('A' + n % 26) + s;
        n /= 26;
    }
    return s;
}
