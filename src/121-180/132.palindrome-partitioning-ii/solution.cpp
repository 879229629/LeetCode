#include "solution.h"
#include <climits>
#include <iostream>

int solution::minCut(std::string s) {
    int N = s.length();
    if (N < 2) return 0;

    int minCuts[N + 1];
    for (int i = 0; i <= N; ++i) minCuts[i] = i - 1;

    bool isPalin[N][N];
    std::fill_n(&isPalin[0][0], N * N, false);
    for (int j = 0; j < N; ++j) {
        for (int i = j; i >= 0; --i) {
            if (s[i] == s[j] && (j - i <= 2 || isPalin[i + 1][j - 1])) {
                isPalin[i][j] = true;
                minCuts[j + 1] = std::min(minCuts[j + 1], 1 + minCuts[i]);
            }
        }
    }
    return minCuts[N];
}
