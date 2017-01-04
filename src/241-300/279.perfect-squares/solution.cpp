#include "solution.h"
#include <iostream>
#include <vector>

int solution::numSquares(int n) {
    if (n <= 0) return 0;

    std::vector<int> s(n + 1, INT_MAX);
    s[0] = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j * j <= i; ++j) {
            s[i] = std::min(s[i], s[i - j * j] + 1);
        }
    }
    return s.back();
}
