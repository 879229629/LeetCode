#ifndef LEETCODE_215_SOLUTION_H_
#define LEETCODE_215_SOLUTION_H_

#include <vector>

class solution {
public:
    int findKthLargest(std::vector<int> &nums, int k);

    void max_heapify(std::vector<int> &nums, int start, int end);
};


#endif // LEETCODE_215_SOLUTION_H_
