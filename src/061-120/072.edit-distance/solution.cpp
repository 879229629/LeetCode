#include "solution.h"

#include <algorithm>
#include <iostream>
#include <vector>

int solution::minDistance(std::string word1, std::string word2) {
    int m = word1.length();
    int n = word2.length();
    std::vector<std::vector<int>> d(m + 1, std::vector<int>(n + 1, 0));
    for (int i = 1; i <= m; ++i) {
        d[i][0] = i;
    }
    for (int j = 1; j <= n; ++j) {
        d[0][j] = j;
    }

    for (int k = 1; k <= m; ++k) {
        for (int f = 1; f <= n; ++f) {
            if (word1[k-1] == word2[f-1]) d[k][f] = d[k - 1][f - 1];
            else d[k][f] = 1 + std::min(d[k - 1][f - 1], std::min(d[k][f - 1], d[k - 1][f]));
        }
    }

    for (int i = 0; i <=m ; ++i) {
        for (int j = 0; j <=n ; ++j) {
            std::cout << d[i][j] << "  " ;
        }
        std::cout << std::endl;
    }

    return d[m][n];
}
