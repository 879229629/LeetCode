#include "solution.h"
#include <cstdlib>
#include <iostream>

int solution::compareVersion(std::string version1, std::string version2) {
    int pos1 = 0;
    int pos2 = 0;
    while (pos1 < version1.length() && version1[pos1++] != '.');
    while (pos2 < version2.length() && version2[pos2++] != '.');
    int v1 = std::atoi(version1.substr(0, pos1).c_str());
    int v2 = std::atoi(version2.substr(0, pos2).c_str());
    if (v1 > v2) return 1;
    else if (v1 < v2) return -1;
    else if (pos1 >= version1.length() && pos2 >= version2.length()) return 0;
    else return compareVersion(version1.substr(pos1), version2.substr(pos2));
}
