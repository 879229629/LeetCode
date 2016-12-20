#include "solution.h"
#include <climits>
#include <iostream>

int solution::minCut(std::string s) {
    int N = s.length();
    if (N < 2) return 0;

    bool isPalin[N][N];
    std::fill_n(&isPalin[0][0], N * N, false);
    for (int j = 0; j < N; ++j) {
        for (int i = j; i >= 0; --i) {
            if (s[i] == s[j] && (j - i <= 2 || isPalin[i + 1][j - 1])) {
                isPalin[i][j] = true;
            }
        }
    }
    int minCuts[N];
    for (int i = 0; i < N; ++i) minCuts[i] = i;
    for (int j = 0; j < N; ++j) {
        for (int i = j; i >= 0; --i) {
//            std::cout << i << "][" << j << "][" << isPalin[i][j] << "\n";
            if (isPalin[i][j]) {
                minCuts[j] = i == 0 ? minCuts[i] : std::min(minCuts[j], 1 + minCuts[i - 1]);
//                std::cout << "##" << j << "][" << minCuts[j] << "\n";
            }
        }
    }
    return minCuts[N - 1];
}
