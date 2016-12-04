#include "solution.h"

#include <cassert>
#include <iostream>
#include <algorithm>
#include <vector>

std::string solution::multiply(std::string num1, std::string num2) {
    if (num1 == "0" || num2 == "0") return "0";
    int m = num1.length();
    int n = num2.length();
    std::vector<int> p(m + n, 0);

    std::reverse(num1.begin(), num1.end());
    std::reverse(num2.begin(), num2.end());

    int k = 0;

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            int a = (num1[i] - '0') * (num2[j] - '0') + p[i + j];

//            std::cout << i << "," << j << "," << p[i + j] << "," << "## \n";

            p[i + j] = a % 10;
            p[i + j + 1] += a / 10;


//            std::for_each(p.rbegin(), p.rend(), [](int n) { std::cout << n << ", "; });
//            std::cout << std::endl;
        }
//        std::cout << std::endl;
//        std::cout << std::endl;
    }

    std::string sum = "";
    int pos = p.size() - 1;
    while (p[pos] == 0) --pos;

    for (int l = 0; l <= pos; ++l) {
        sum += std::string(1, p[l] + '0');
    }
    std::reverse(sum.begin(), sum.end());
    return sum;
}

