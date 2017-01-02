#include "solution.h"

#include <stack>

std::vector<int> solution::diffWaysToCompute(std::string input) {
    std::vector<int> res;
    for (int i = 0; i < input.size(); ++i) {
        if (input[i] == '+' || input[i] == '-' || input[i] == '*') {
            std::vector<int> res1 = diffWaysToCompute(input.substr(0, i));
            std::vector<int> res2 = diffWaysToCompute(input.substr(i + 1));
            for (int m = 0; m < res1.size(); ++m) {
                for (int n = 0; n < res2.size(); ++n) {
                    if (input[i] == '+') {
                        res.push_back(res1[m] + res2[n]);
                    } else if (input[i] == '-') {
                        res.push_back(res1[m] - res2[n]);
                    } else if (input[i] == '*') {
                        res.push_back(res1[m] * res2[n]);
                    }
                }
            }
        }
    }
    if (res.empty()) {
        res.push_back(std::stoi(input));
    }
    return res;
}
