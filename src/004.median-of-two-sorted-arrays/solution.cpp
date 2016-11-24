#include "solution.h"


double solution::findMedianSortedArrays(std::vector<int> &nums1, std::vector<int> &nums2) {
    std::vector<int> data;
    for (auto itr = nums1.begin(); itr != nums1.end(); ++itr) {
        data.push_back(*itr);
    }
    for (auto itr = nums2.begin(); itr != nums2.end(); ++itr) {
        data.push_back(*itr);
    }
    std::sort(data.begin(), data.end());
    int len = data.size();
    if (len % 2 == 1) {
        return data[len / 2];
    } else {
        return (data[len / 2] + data[len / 2 - 1]) * 1.0 / 2;
    }
}
