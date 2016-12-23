#include "solution.h"

#include <vector>
#include <cstdlib>
#include <unordered_map>
#include <iostream>

std::string solution::fractionToDecimal(int numerator, int denominator) {
    if (denominator == 0) return "";
    if (numerator == 0) return "0";

    std::vector<std::string> chars;
    int i = 0;
    if ((numerator ^ denominator) < 0) {
        chars.push_back("-");
        ++i;
    }

    long numeratorL = std::abs(long(numerator));
    long int denominatorL = std::abs(long(denominator));

    std::unordered_map<int, int> flags;
    bool hasPoint = false;

    while (numeratorL != 0) {
        long first = numeratorL / denominatorL;
        long second = numeratorL % denominatorL;

        if (flags.find(numeratorL) != flags.end()) break;

        chars.push_back(std::to_string(first));
        ++i;
        if (second != 0) {
            if (!hasPoint) {
                chars.push_back(".");
                ++i;
                hasPoint = true;
            } else {
                flags[numeratorL] = i - 1;
            }
        }
        numeratorL = second * 10;
    }
    std::string s;
    for (int i = 0; i < chars.size(); ++i) {
        if (numeratorL != 0 && i == flags[numeratorL]) s += "(";
        s += chars[i];
    }
    if (numeratorL != 0) s += ")";
    return s;
}
