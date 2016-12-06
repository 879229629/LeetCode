#ifndef LEETCODE_039_SOLUTION_H_
#define LEETCODE_039_SOLUTION_H_

#include <vector>

class solution {
public:
    std::vector<std::vector<int>> combinationSum(std::vector<int> &candidates, int target);

    void combinationSum(std::vector<int> &candidates,
                        int target,
                        std::vector<std::vector<int> > &res,
                        std::vector<int> &combination,
                        int begin);
};


#endif // LEETCODE_039_SOLUTION_H_
