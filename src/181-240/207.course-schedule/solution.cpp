#include "solution.h"

#include <vector>

bool solution::canFinish(int numCourses, std::vector<std::pair<int, int>> &prerequisites) {
    int n = prerequisites.size();
    std::vector<std::vector<int>> vp(numCourses);
    std::vector<int> nums(numCourses, 0);
    for (int i = 0; i < n; ++i) {
        vp[prerequisites[i].second].push_back(prerequisites[i].first);
        nums[prerequisites[i].first]++;
    }
    int ret = 0;
    while (true) {
        bool flag = false;
        for (int i = 0; i < numCourses; ++i) {
            if (nums[i] == 0) {
                nums[i] = -1;
                ++ret;
                flag = true;
                for (int j = 0; j < vp[i].size(); ++j) {
                    --nums[vp[i][j]];
                }
            }
        }
        if (!flag) break;
    }
    return ret == numCourses;
}
