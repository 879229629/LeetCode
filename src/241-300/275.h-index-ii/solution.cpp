#include "solution.h"

#include <iostream>

int solution::hIndex(std::vector<int> &citations) {
    int left = 0;
    int len = citations.size();
    int right = len - 1;
    while (left <= right) {
        int mid = left + ((right - left) >> 1);
        if (citations[mid] < len - mid) left = mid + 1;
        else right = mid - 1;
    }
    return len - left;
}
