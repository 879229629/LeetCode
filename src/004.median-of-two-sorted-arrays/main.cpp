#include <iostream>
#include <vector>

#include "solution.h"

int main(int argc, char *argv[]) {
    std::vector<int> num1{1, 3};
    std::vector<int> num2{2};

    solution s;
    double mid = s.findMedianSortedArrays(num1, num2);

    std::cout << "mid:" << mid << std::endl;
}
