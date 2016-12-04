#include "solution.h"

#include <cassert>
#include <iostream>
#include <algorithm>

std::string solution::multiply(std::string num1, std::string num2) {
    assert(!num1.empty() && !num2.empty());

    if (num1.length() < num2.length()) return multiply(num2, num1);
    if (num2.length() == 1) {
        char c = num2[0];
        if (c == '0') return "0";
        else if (c == 1) return num1;
        else {
            std::string sum = "0";
            for (int i = '0'; i < c; ++i) {
                sum = add(sum, num1);
            }
            return sum;
        }
    } else {
        std::string first = multiply(num1, num2.substr(num2.length() - 1));
        std::string second = multiply(num1 + "0", num2.substr(0, num2.length() - 1));
        return add(first, second);
    }
}

std::string solution::add(std::string num1, std::string num2) {
    int i = num1.length() - 1;
    int j = num2.length() - 1;
    std::string sum = "";
    int q = 0;
    while (i >= 0 || j >= 0) {
        int s = q;
        if (i >= 0) s += num1[i] - '0';
        if (j >= 0) s += num2[j] - '0';
        q = s / 10;
        s = s % 10;
        sum += std::string(1, s + '0');
        --i;
        --j;
    }
    if (q > 0) {
        sum += std::string(1, q + '0');
    }
    std::reverse(sum.begin(), sum.end());
    return sum;
}
