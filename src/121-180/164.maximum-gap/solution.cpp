#include "solution.h"
#include <iostream>

// http://bookshadow.com/weblog/2014/12/14/leetcode-maximum-gap/

int solution::maximumGap(std::vector<int> &nums) {
    if (nums.size() < 2) return 0;
    int len = nums.size();
    int minV = nums[0];
    int maxv = nums[0];
    for (int i = 1; i < len; ++i) {
        if (nums[i] > maxv) maxv = nums[i];
        if (nums[i] < minV) minV = nums[i];
    }
//    std::cout << minV << "," << maxv << "\n";

    int bucket_size = std::max(1, (maxv - minV) / (len - 1));
    int bucket_num = (maxv - minV) / bucket_size + 1;
    if (bucket_num <= 1) return maxv - minV;

    std::vector<int> bucket_max(bucket_num, INT_MIN);
    std::vector<int> bucket_min(bucket_num, INT_MAX);
    std::vector<int> bucket_count(bucket_num, 0);

    for (int i = 0; i < len; ++i) {
        int bucket_id = (nums[i] - minV) / bucket_size;
        bucket_count[bucket_id]++;
        bucket_min[bucket_id] = bucket_min[bucket_id] > nums[i] ? nums[i] : bucket_min[bucket_id];
        bucket_max[bucket_id] = bucket_max[bucket_id] < nums[i] ? nums[i] : bucket_max[bucket_id];
    }

    int last_max = minV;
    int maxGap = INT_MIN;
    for (int i = 0; i < bucket_num; i++) {
        if (bucket_count[i] > 0) {
            maxGap = std::max(maxGap, bucket_min[i] - last_max);
            last_max = bucket_max[i];
        }
    }
    return maxGap;
}
