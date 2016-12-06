#include "solution.h"

#include <algorithm>

int solution::maxArea(std::vector<int> &height) {
    int area = 0;
    int i = 0;
    int j = height.size() - 1;
    while (i < j) {
        int h = std::min(height[i], height[j]);
        area = std::max(area, h * (j - i));
        while (height[i] <= h) ++i;
        while (height[j] <= h) --j;
    }
    return area;
}
