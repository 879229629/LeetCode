#include "solution.h"

std::vector<int> solution::majorityElement(std::vector<int> &nums) {
    int a = 0, b = 0, ca = 0, cb = 0;

    for (int num :nums) {
        if (num == a) ++ca;
        else if (num == b) ++cb;
        else if (ca == 0) {
            a = num;
            ca = 1;
        } else if (cb == 0) {
            b = num;
            ++cb;
        } else {
            --ca;
            --cb;
        }
    }
    ca = 0;
    cb = 0;
    for (int num:nums) {
        if (num == a) ++ca;
        else if (num == b) ++cb;
    }
    std::vector<int> res;
    if (ca > nums.size() / 3) res.push_back(a);
    if (cb > nums.size() / 3) res.push_back(b);
    return res;
}
