#include "solution.h"

#include <iostream>

std::vector<int> solution::findOrder(int numCourses, std::vector<std::pair<int, int>> &prerequisites) {
    std::vector<std::vector<int>> vp(numCourses);
    std::vector<int> nums(numCourses);
    for (const auto &it : prerequisites) {
        vp[it.second].push_back(it.first);
        ++nums[it.first];
    }

    std::vector<int> res;
    while (true) {
        int flag = false;
        for (int i = 0; i < numCourses; ++i) {
            if (nums[i] == 0) {
                res.push_back(i);
                flag = true;
                nums[i] = -1;
                for (int j = 0; j < vp[i].size(); ++j) {
                    --nums[vp[i][j]];
                }
            }
        }
        if (!flag) break;
    }
    if (res.size() != numCourses) res.clear();
    return res;
}
