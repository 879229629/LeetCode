#include "solution.h"

int solution::firstBadVersion(int n) {
    int left = 1;
    int right = n;
    while (left <= right) {
        int mid = left + ((right - left) >> 1);
        if (isBadVersion(mid)) right = mid - 1;
        else left = mid + 1;
    }
    return right + 1;
}

bool solution::isBadVersion(int version) {
    return false;
}
