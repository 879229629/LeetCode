#include "solution.h"

int solution::canCompleteCircuit(std::vector<int> &gas, std::vector<int> &cost) {
    if (gas.empty()) return 0;
    int m = gas.size();
    std::vector<int> diff(m, 0);
    int leftGas = 0;
    for (int i = 0; i < m; ++i) {
        diff[i] = gas[i] - cost[i];
        leftGas += diff[i];
    }
    if (leftGas < 0) return -1;

    int ret = 0;
    int sum = 0;
    for (int j = 0; j < m; ++j) {
        sum += diff[j];
        if (sum < 0) {
            sum = 0;
            ret = j + 1;
        }
    }
    return ret;
}
