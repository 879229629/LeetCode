#include "solution.h"
#include <iostream>

std::vector<int> solution::grayCode(int n) {
    std::vector<int> nums;
    nums.push_back(0);
    while (true) {
        int m = nums.back();
        if (nums.size() % 2 == 1) {
            //改变最右边的位元
            m = m % 2 == 0 ? m + 1 : m - 1;
//            std::cout << m << ",," << (1 << n) << std::endl;
            if (m == (1 << n)) break;
            nums.push_back(m);
        } else {
            //改变右起第一个为1的位元的左边位元
            int i = 0;
            std::cout << m << "," << i << std::endl;
            while ((m >> i) % 2 != 1) ++i;
            ++i;
            m = (m >> i) % 2 == 0 ? m + (1 << i) : m - (1 << i);
            std::cout << m << "," << i << "," << (1 << n) << std::endl;
            if (i == n) break;
            nums.push_back(m);
        }
    }
    return nums;
}
