#include "solution.h"

#include <vector>
#include <string>
#include <iostream>

// "0123456789"  4
std::string solution::convert(std::string s, int numRows) {
    int length = s.length();
    if (numRows <= 1 || numRows >= length) {
        return s;
    }
    std::string output;

    for (int i = 0; i < numRows; ++i) {
        for (int j = i; j < length; j += 2 * (numRows - 1)) {
            output += s[j];
            if (i != 0 && i != numRows - 1) {
                int t = j + 2 * (numRows - 1) - 2 * i;
                if (t < length) {
                    output += s[t];
                }
            }
        }
    }
    return output;
}