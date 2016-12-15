#include "solution.h"
#include <vector>

bool solution::isInterleave(std::string s1, std::string s2, std::string s3) {
    if (s1.length() + s2.length() != s3.length()) return false;
    int m = s1.length();
    int n = s2.length();
    std::vector<std::vector<bool>> nums(m + 1, std::vector<bool>(n + 1, false));
    for (int i = 0; i <= m; ++i) {
        for (int j = 0; j <= n; ++j) {
            if (i == 0 && j == 0) nums[i][j] = true;
            else if (i == 0) nums[i][j] = nums[i][j - 1] && s2[j - 1] == s3[i + j - 1];
            else if (j == 0) nums[i][j] = nums[i - 1][j] && s1[i - 1] == s3[i + j - 1];
            else {
                nums[i][j] =
                        (nums[i - 1][j] && s1[i - 1] == s3[i + j - 1]) ||
                        (nums[i][j - 1] && s2[j - 1] == s3[i + j - 1]);
            }
        }
    }
    return nums[m][n];
}
