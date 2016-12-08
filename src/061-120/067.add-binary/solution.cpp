#include "solution.h"

std::string solution::addBinary(std::string a, std::string b) {
    int len1 = a.size();
    int len2 = b.size();
    int cout = 0;
    std::string s;
    for (int i = 0; i < len1 || i < len2; ++i) {
        if (i < len1) cout += s[len1 - 1 - i] - '0';
        if (i < len2) cout += s[len2 - 1 - i] - '0';
        s += std::string(1, cout % 2 + '0');
        cout = cout / 2;
    }
    if (cout > 0) s += std::string(1, cout + '0');
    std::reverse(s.begin(),s.end());
    return s;
}
