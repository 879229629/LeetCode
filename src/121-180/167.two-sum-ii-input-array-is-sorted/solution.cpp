#include "solution.h"

std::vector<int> solution::twoSum(std::vector<int> &numbers, int target) {
    int i = 0;
    int j = numbers.size() - 1;
    while (i < j) {
        if (numbers[i] + numbers[j] == target) return {i + 1, j + 1};
        if (numbers[i] + numbers[j] > target) --j;
        else ++i;
    }
    return {};
}
