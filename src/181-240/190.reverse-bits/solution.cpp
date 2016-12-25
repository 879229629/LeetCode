#include "solution.h"
#include <iostream>

uint32_t solution::reverseBits(uint32_t n) {
    uint32_t res = n;

    int i = 0;
    int j = 31;
    while (i < j) {
//        std::cout << i << "," << j << "\n";
        bool a1 = (n >> i) % 2 == 0;
        bool a2 = (n >> j) % 2 == 0;
        if ((a1 && !a2) || (!a1 && a2)) {
            if (a1) {
                res ^= 1 << j;
                res |= 1 << i;
            } else {
                res |= 1 << j;
                res ^= 1 << i;
            }
        }
        ++i;
        --j;
    }
    return res;
}
