#include <vector>
#include "solution.h"

std::string solution::intToRoman(int num) {
    std::vector<std::vector<std::string>> data = {{"", "I", "II", "III", "IV",   "V",     "VI",     "VII",     "VIII",     "IX"},
                                                  {"", "X", "XX", "XXX", "XL",   "L",     "LX",     "LXX",     "LXXX",     "XC"},
                                                  {"", "C", "CC", "CCC", "CD",   "D",     "DC",     "DCC",     "DCCC",     "CM"},
                                                  {"", "M", "MM", "MMM", "MMMM", "MMMMM", "MMMMMM", "MMMMMMM", "MMMMMMMM", "MMMMMMMMM"}};
    std::string str = "";
    int i = 3;
    int b = 1000;
    while (i >= 0) {
        str += data[i][num / b];
        num %= b;
        b = b / 10;
        --i;
    }
    return str;
}
