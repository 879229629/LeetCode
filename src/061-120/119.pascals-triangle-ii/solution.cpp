#include "solution.h"

std::vector<int> solution::getRow(int rowIndex) {
    std::vector<int> nums(rowIndex + 1, 1);
    int mid = rowIndex / 2;
    int i = 1;
    int j = rowIndex - 1;

    long c = 1;
    while (j >= mid) {
        c *= (j + 1);
        c /= i;
        nums[j] = c;
        nums[i] = c;
        --j;
        ++i;
    }
    return nums;
}
