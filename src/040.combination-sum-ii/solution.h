#ifndef LEETCODE_040_SOLUTION_H_
#define LEETCODE_040_SOLUTION_H_

#include <vector>

class solution {
public:
    std::vector<std::vector<int>> combinationSum2(std::vector<int> &candidates, int target);

    void combinationSum(std::vector<int> &candidates,
                        int target,
                        std::vector<std::vector<int> > &res,
                        std::vector<int> &combination,
                        int begin);

};


#endif // LEETCODE_040_SOLUTION_H_
