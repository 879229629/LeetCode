#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::vector<int> nums = {
            62, 58, 36, 59, 4, 16, 82, 67, 13, 41, 31, 29, 53, 56, 43, 96, 56, 43, 46, 45, 7, 65, 9, 9, 96, 99, 95, 84,
            94, 27, 69, 88, 38, 25, 77, 44, 38, 37, 1, 94, 49, 78, 4, 99, 99, 22, 7, 60, 37, 17, 42, 48, 41, 88, 57, 17,
            92, 1, 51, 51, 82, 34, 8, 3, 84, 29, 23, 5, 19, 1, 28, 76, 32, 33, 70, 94, 95, 8, 72, 35, 99, 50, 80, 14,
            11, 78, 4, 38, 99, 65, 11, 71, 52, 68, 22, 32, 1, 26, 82, 28};
    std::cout << "s: " << s.largestNumber(nums) << std::endl;
}