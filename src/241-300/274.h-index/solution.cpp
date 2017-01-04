#include "solution.h"

int solution::hIndex(std::vector<int> &citations) {
    if (citations.empty()) return 0;
    std::sort(citations.begin(), citations.end());
    int i = 0;
    for (auto it = citations.rbegin(); it != citations.rend(); ++it) {
        if (*it > i) {
            ++i;
        } else {
            break;
        }
    }
    return i;
}
