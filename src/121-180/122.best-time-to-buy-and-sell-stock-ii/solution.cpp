#include "solution.h"
#include <iostream>

int solution::maxProfit(std::vector<int> &prices) {
    int sum = 0;
    for (int i = 1; i < prices.size(); ++i) {
        sum += std::max(0, prices[i] - prices[i - 1]);
    }
    return sum;
}
