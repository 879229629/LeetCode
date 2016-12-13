#include "solution.h"

#include <iostream>

void solution::merge(std::vector<int> &nums1, int m, std::vector<int> &nums2, int n) {
    int i = m - 1;
    int j = n - 1;
    int tar = m + n - 1;
    while (j >= 0) {
        nums1[tar--] = i >= 0 && nums1[i] > nums2[j] ? nums1[i--] : nums2[j--];
    }
    return;
}

void solution::move(std::vector<int> &nums1, int from, int to, int len) {
    for (int i = to - 1; i >= from; --i) {
        nums1[i + len] = nums1[i];
    }
    return;
}