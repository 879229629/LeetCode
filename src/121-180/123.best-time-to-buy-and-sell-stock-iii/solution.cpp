#include "solution.h"
#include <iostream>

int solution::maxProfit(std::vector<int> &prices) {
    if (prices.empty()) return 0;
    int len = prices.size();

    std::vector<int> s1(len);
    int min = prices[0];
    for (int i = 1; i < len; ++i) {
        min = std::min(min, prices[i]);
        s1[i] = std::max(s1[i - 1], prices[i] - min);
    }

    std::vector<int> s2(len);
    int max = prices[len-1];
    for (int j = len - 2; j >= 0; --j) {
        max = std::max(max, prices[j]);
        s2[j] = std::max(s2[j + 1], max - prices[j]);
    }

    int maxRet = 0;
    for (int k = 0; k < len; ++k) {
        maxRet = std::max(maxRet, s1[k] + s2[k]);
        std:: cout << s1[k] << ", " << s2[k] << maxRet << "\n";
    }
    return maxRet;
}
