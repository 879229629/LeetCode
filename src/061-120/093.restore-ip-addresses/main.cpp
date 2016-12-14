#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::string ips = "25525511135";
    std::vector<std::string> strs = s.restoreIpAddresses(ips);
    for (int i = 0; i < strs.size(); ++i) {
        std::cout << strs[i] << std::endl;
    }

    std::cout << ips.substr(1, 3);
}