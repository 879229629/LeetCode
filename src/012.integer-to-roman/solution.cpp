#include "solution.h"

std::string solution::intToRoman(int num) {
    std::string str = "";
    int k = 1000;
    while (num > 0) {
        int b = num / k;
        num = num % k;
        if (k == 1000) {
            for (int i = 1; i <= b; ++i) {
                str += "M";
            }
        } else if (k == 100) {
            if (b <= 3) {
                for (int i = 1; i <= b; ++i) {
                    str += "C";
                }
            } else if (b == 4) {
                str += "CD";
            } else if (b == 5) {
                str += "D";
            } else if (b == 6) {
                str += "DC";
            } else if (b == 7) {
                str += "DCC";
            } else if (b == 8) {
                str += "DCCC";
            } else if (b == 9) {
                str += "CM";
            }
        } else if (k == 10) {
            if (b == 1) {
                str += "X";
            } else if (b == 2) {
                str += "XX";
            } else if (b == 3) {
                str += "XXX";
            } else if (b == 4) {
                str += "XL";
            } else if (b == 5) {
                str += "L";
            } else if (b == 6) {
                str += "LX";
            } else if (b == 7) {
                str += "LXX";
            } else if (b == 8) {
                str += "LXXX";
            } else if (b == 9) {
                str += "XC";
            }
        } else if (k == 1) {
            if (b == 1) {
                str += "I";
            } else if (b == 2) {
                str += "II";
            } else if (b == 3) {
                str += "III";
            } else if (b == 4) {
                str += "IV";
            } else if (b == 5) {
                str += "V";
            } else if (b == 6) {
                str += "VI";
            } else if (b == 7) {
                str += "VII";
            } else if (b == 8) {
                str += "VIII";
            } else if (b == 9) {
                str += "IX";
            }
        }
        k = k / 10;
    }
    return str;
}
