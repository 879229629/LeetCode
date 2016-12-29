#include "solution.h"


int solution::findKthLargest(std::vector<int> &nums, int k) {
    if (nums.empty() || k > nums.size()) return 0;
    int start = 0;
    int end = k - 1;

    for (int i = nums.size() / 2; i >= 0; --i) {
        max_heapify(nums, i, end);
    }

    for (int j = k; j < nums.size(); ++j) {
        if (nums[j] <= nums[0]) continue;
        std::swap(nums[0], nums[j]);
        max_heapify(nums, 0, end);
    }
    return nums[0];
}

void solution::max_heapify(std::vector<int> &nums, int start, int end) {
    // 调整堆 [start, end]
    int dad = start;
    int son = (dad << 1) + 1;
    while (son <= end) {
        // 找出最小子节点
        if (son + 1 <= end && nums[son] > nums[son + 1]) ++son;
        // 父节点大于二个子节点，不需要调整
        if (nums[dad] <= nums[son]) break;
        else {
            std::swap(nums[dad], nums[son]);
            dad = son;
            son = (dad << 1) + 1;
        }
    }
    return;
}
