#include <iostream>

#include "solution.h"
#include "../../common/treeNode.h"

int main(int argc, char *argv[]) {
    solution s;
    auto r = s.numTrees(3);
    std::cout << "ret: " << r<< std::endl;
}