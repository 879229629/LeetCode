#include "solution.h"

int solution::minimumTotal(std::vector<std::vector<int>> &triangle) {
    if (triangle.empty()) return 0;
    int len = triangle.size();

    for (int i = 1; i < triangle.size(); ++i) {
        for (int j = 0; j < triangle[i].size(); ++j) {
            if (j == 0) {
                triangle[i][j] += triangle[i - 1][j];
            } else if (j == triangle[i].size() - 1) {
                triangle[i][j] += triangle[i - 1][j - 1];
            } else {
                triangle[i][j] += std::min(triangle[i - 1][j - 1], triangle[i - 1][j]);
            }
        }
    }

    return *std::min_element(triangle[len - 1].begin(), triangle[len - 1].end());
}
