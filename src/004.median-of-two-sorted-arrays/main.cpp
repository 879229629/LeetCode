#include <iostream>
#include <vector>

#include "solution.h"

int main(int argc, char *argv[]) {
    std::vector<int> num1{5,6};
    std::vector<int> num2{1,2,3,4,7};

    solution s;
    double mid = s.findMedianSortedArrays(num1, num2);

    std::cout << "mid:" << mid << std::endl;
}
