#include "solution.h"

std::vector<int> solution::plusOne(std::vector<int> &digits) {
    int len = digits.size();
    std::vector<int> data(len + 1, 0);
    int k = 1;
    for (int i = digits.size() - 1; i >= 0; --i) {
        int sum = digits[i] + k;
        data[i + 1] = sum % 10;
        k = sum / 10;
    }
    if (k > 0) data[0] = k;
    else data.erase(data.begin());
    return data;
}
