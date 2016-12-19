#include "solution.h"
#include <iostream>

int solution::maxProfit(std::vector<int> &prices) {
    int maxPrice = 0;
    int minPrice = INT_MAX;
    for (int i = 0; i < prices.size(); ++i) {
        minPrice = std::min(minPrice, prices[i]);
        maxPrice = std::max(maxPrice, prices[i] - minPrice);
    }
    return maxPrice;
}
