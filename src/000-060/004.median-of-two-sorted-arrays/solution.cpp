#include "solution.h"

#include <iostream>
#include <vector>
#include <cmath>

double solution::findMedianSortedArrays(std::vector<int> &nums1, std::vector<int> &nums2) {
    auto len1 = nums1.size();
    auto len2 = nums2.size();
    int sumLen = static_cast<int>(len1 + len2);

    if (sumLen % 2 == 1) {
        return this->findK(nums1, nums2, sumLen / 2 + 1);
    } else {
        int l = this->findK(nums1, nums2, sumLen / 2);
        int r = this->findK(nums1, nums2, sumLen / 2 + 1);
        return (l + r) * 1.0 / 2;
    }
}

int solution::findK(std::vector<int> &nums1, std::vector<int> &nums2, int k) {
    auto len1 = nums1.size();
    auto len2 = nums2.size();
    if (len1 > len2) {
        return this->findK(nums2, nums1, k);
    }
    if (len1 == 0) {
        return nums2[k - 1];
    }

    if (k == 1) {
        return std::min(nums1[0], nums2[0]);
    }

    int pa = std::min(k / 2, static_cast<int>(len1));
    int pb = k - pa;
    if (nums1[pa - 1] < nums2[pb - 1]) {
        std::vector<int> newNums1(nums1.begin() + pa, nums1.end());
        return this->findK(newNums1, nums2, k - pa);
    } else if (nums1[pa - 1] > nums2[pb - 1]) {
        if (len2 > k) {
            std::vector<int> newNums2(nums2.begin() + pb, nums2.end() - (len2 - k));
            return this->findK(nums1, newNums2, k - pb);
        } else {
            std::vector<int> newNums2(nums2.begin() + pb, nums2.end());
            return this->findK(nums1, newNums2, k - pb);
        }
    } else {
        return nums1[pa - 1];
    }
}
