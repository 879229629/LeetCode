#include "solution.h"

#include <vector>
#include <iostream>

int solution::numDistinct(std::string s, std::string t) {
    int m = t.length();
    int n = s.length();
    std::vector<std::vector<int>> data(m + 1, std::vector<int>(n + 1, 0));
    for (int i = 0; i <= m; ++i) {
        for (int j = 0; j <= n; ++j) {
            if (i == 0 && j == 0) data[i][j] = 1;
            if (i == 0) data[i][j] = 1;
            else if (j == 0) data[i][j] = 0;
            else {
                data[i][j] = data[i][j - 1] + (t[i - 1] == s[j - 1] ? data[i - 1][j - 1] : 0);
            }
        }
    }
    return data[m][n];
}
