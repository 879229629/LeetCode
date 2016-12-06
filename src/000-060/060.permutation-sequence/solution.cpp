#include "solution.h"

std::string solution::getPermutation(int n, int k) {
    int num = factorial(n);
    if (k < 1 || k > num) return "";
    std::vector<char> nums;
    for (int i = 1; i <= n; ++i) {
        nums.push_back('0' + i);
    }
    return help(nums, k);
}

std::string solution::help(std::vector<char> nums, int k) {
    int len = nums.size();
    if (len == 1) return std::string(1, nums[0]);

    int num = factorial(len - 1);
    int pos = k / num;
    if (k % num != 0) ++pos;
    char first = nums[pos - 1];
    nums.erase(nums.begin() + pos - 1);
    return std::string(1, first) + help(nums, k - num * (pos - 1));
}

int solution::factorial(int n) {
    if (n == 1) return 1;
    return n * factorial(n - 1);
}