#include "solution.h"

#include <vector>

int solution::romanToInt(std::string s) {
    size_t length = s.length();
    if (length == 0) return 0;
    if (s[0] == 'M') {
        int count = 1;
        int i = 1;
        while (i < length && s[i] == 'M') {
            ++count;
            ++i;
        }
        return count * 1000 + romanToInt(s.substr(i));
    } else if (s[0] == 'C') {
        if (3 <= length && s.substr(0, 3) == "CCC") {
            return 300 + romanToInt(s.substr(3));
        }

        if (2 <= length && s.substr(0, 2) == "CM") {
            return 900 + romanToInt(s.substr(2));
        }

        if (2 <= length && s.substr(0, 2) == "CD") {
            return 400 + romanToInt(s.substr(2));
        }

        if (2 <= length && s.substr(0, 2) == "CC") {
            return 200 + romanToInt(s.substr(2));
        }
        return 100 + romanToInt(s.substr(1));
    } else if (s[0] == 'D') {
        if (4 <= length && s.substr(0, 3) == "DCCC") {
            return 800 + romanToInt(s.substr(4));
        }
        if (3 <= length && s.substr(0, 3) == "DCC") {
            return 700 + romanToInt(s.substr(3));
        }
        if (2 <= length && s.substr(0, 2) == "DC") {
            return 600 + romanToInt(s.substr(2));
        }
        return 500 + romanToInt(s.substr(1));
    } else if (s[0] == 'X') {
        if (3 <= length && s.substr(0, 3) == "XXX") {
            return 30 + romanToInt(s.substr(3));
        }
        if (2 <= length && s.substr(0, 2) == "XC") {
            return 90 + romanToInt(s.substr(2));
        }

        if (2 <= length && s.substr(0, 2) == "XL") {
            return 40 + romanToInt(s.substr(2));
        }

        if (2 <= length && s.substr(0, 2) == "XX") {
            return 20 + romanToInt(s.substr(2));
        }
        return 10 + romanToInt(s.substr(1));
    } else if (s[0] == 'L') {
        if (4 <= length && s.substr(0, 4) == "LXXX") {
            return 80 + romanToInt(s.substr(4));
        }
        if (3 <= length && s.substr(0, 3) == "LXX") {
            return 70 + romanToInt(s.substr(3));
        }
        if (2 <= length && s.substr(0, 2) == "LX") {
            return 60 + romanToInt(s.substr(2));
        }
        return 50 + romanToInt(s.substr(1));
    } else if (s[0] == 'I') {
        if (3 <= length && s.substr(0, 3) == "III") {
            return 3 + romanToInt(s.substr(3));
        }

        if (2 <= length && s.substr(0, 2) == "IX") {
            return 9 + romanToInt(s.substr(2));
        }

        if (2 <= length && s.substr(0, 2) == "IV") {
            return 4 + romanToInt(s.substr(2));
        }

        if (2 <= length && s.substr(0, 2) == "II") {
            return 2 + romanToInt(s.substr(2));
        }
        return 1 + romanToInt(s.substr(1));
    } else if (s[0] == 'V') {
        if (4 <= length && s.substr(0, 4) == "VIII") {
            return 8 + romanToInt(s.substr(4));
        }
        if (3 <= length && s.substr(0, 3) == "VII") {
            return 7 + romanToInt(s.substr(3));
        }
        if (2 <= length && s.substr(0, 2) == "VI") {
            return 6 + romanToInt(s.substr(2));
        }
        return 5 + romanToInt(s.substr(1));
    }
    return 0;
}
