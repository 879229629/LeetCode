#include "solution.h"

#include <iostream>

std::string solution::numberToWords(int num) {
    if (num == 0) return "Zero";

    int i = 0;
    std::string words;
    while (num > 0) {
        if (num % 1000 != 0) {
            words = helper(num % 1000) + THOUSANDS[i] + " " + words;
        }
        num /= 1000;
        ++i;
    }
    std::size_t pos = words.find_last_not_of(" ");

    if (pos != std::string::npos) {
        words.erase(pos + 1);
    }
    return words;
}

std::string solution::helper(int num) {
    if (num == 0) return "";
    else if (num < 20) return LESS_THAN_20[num] + " ";
    else if (num < 100) return TENS[num / 10] + " " + helper(num % 10);
    else return LESS_THAN_20[num / 100] + " Hundred " + helper(num % 100);
}
