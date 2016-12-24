#include "solution.h"

int solution::titleToNumber(std::string s) {
    int num = 0;
    for (int i = 0; i < s.length(); ++i) {
        num = 26 * num + s[i] - 64;
    }
    return num;
}
