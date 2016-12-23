#include "solution.h"

#include <vector>
#include <cstdlib>
#include <unordered_map>
#include <iostream>

std::string solution::fractionToDecimal(int numerator, int denominator) {
    if (denominator == 0) return "";
    if (numerator == 0) return "0";
    std::string s;
    if (numerator < 0 ^ denominator < 0) s += "-";
    long numer = numerator > 0 ? long(numerator) : long(numerator) * -1;
    long denom = denominator > 0 ? long(denominator) : long(denominator) * -1;
    long integral = numer / denom;
    long rmd = numer % denom;
    s += std::to_string(integral);
    if (rmd == 0) return s;
    s += ".";

    rmd *= 10;
    std::unordered_map<int, int> mp;
    while (rmd != 0) {
        long quotient = rmd / denom;
        if (mp.find(rmd) != mp.end()) {
            s.insert(mp[rmd], 1, '(');
            s += ')';
            break;
        }
        mp[rmd] = s.size();
        s += std::to_string(quotient);
        rmd = (rmd % denom) * 10;
    }
    return s;
}
