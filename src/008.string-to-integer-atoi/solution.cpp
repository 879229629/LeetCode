#include "solution.h"

#include <limits.h>

#include <iostream>

int solution::myAtoi(std::string str) {
    long result = 0;
    int indicator = 1;
    size_t i = str.find_first_not_of(' ');
    if (str[i] == '+' || str[i] == '-') {
        indicator = str[i++] == '-' ? -1 : 1;
    }
    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + (str[i++] - '0');
        if (result * indicator >= INT_MAX) return INT_MAX;
        if (result * indicator <= INT_MIN) return INT_MIN;
    }
    return static_cast<int>(result) * indicator;
}
