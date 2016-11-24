#include "solution.h"

#include <iostream>

// "0123456789"  5
std::string solution::convert(std::string s, int numRows) {
    size_t length = s.length();
    if (numRows <= 1 || numRows >= length) {
        return s;
    }
    std::string output;
    for (int row = 0; row < numRows; ++row) {
        output += s[row];

        int firstStep = 0;
        int secondStep = 0;
        if (row % (numRows - 1) == 0) {
            firstStep = 2 * numRows - 2;
        } else {
            firstStep = 2 * numRows - 2 - 2 * row;
            secondStep = 2 * row;
        }
        for (size_t i = row; i < length;) {
            if (firstStep > 0) {
                i += firstStep;
                if (i < length) output += s[i];
            }
            if (secondStep > 0) {
                i += secondStep;
                if (i < length) output += s[i];
            }
        }
    }
    return output;
}