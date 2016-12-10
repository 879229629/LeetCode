#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    std::string path = "/a/b/c/...";
    std::cout << "s: " << path << "][" << s.simplifyPath(path) << std::endl;
}