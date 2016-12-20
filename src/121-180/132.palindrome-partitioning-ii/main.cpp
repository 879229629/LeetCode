#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    int ret = s.minCut("fifgbeajcacehiicccfecbfhhgfiiecdcjjffbghdidbhbdbfbfjccgbbdcjheccfbhafehieabbdfeigbiaggchaeghaijfbjhi");
    std::cout << "s: " << ret << std::endl;
}