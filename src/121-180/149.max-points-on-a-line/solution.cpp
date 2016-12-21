#include "solution.h"

#include <unordered_map>
#include <climits>

int solution::maxPoints(std::vector<Point> &points) {
    if (points.size() < 2) return points.size();

    std::unordered_map<double, int> t;
    int max = 0;
    for (int i = 0; i < points.size(); ++i) {
        t.clear();
        int dup = 0;
        int invalid = 0;
        for (int j = 0; j < points.size(); ++j) {
            if (i == j) continue;
            else if (points[j].x == points[i].x) {
                if (points[j].y == points[i].y) {
                    ++dup;
                } else {
                    ++invalid;
                }
            } else {
                double k = points[j].x == points[i].x ? INT_MAX : 1.0 * (points[j].y - points[i].y) /
                                                                  (points[j].x - points[i].x);
                ++t[k];
            }
        }
        for (auto &it:t) {
            max = std::max(max, it.second + dup + 1);
        }
        max = std::max(max, dup + invalid + 1);
    }
    return max;
}
