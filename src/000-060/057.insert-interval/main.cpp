#include <iostream>

#include "solution.h"

void print(const std::vector<Interval> &input) {
    for (auto it = input.begin(); it != input.end(); ++it) {
        std::cout << "[" << it->start << "," << it->end << "],";
    }
    std::cout << std::endl;
}

int main(int argc, char *argv[]) {
    std::vector<Interval> input = {Interval(1,3), Interval(6, 9)};
    print(input);
    solution s;
    std::vector<Interval> output = s.insert(input, Interval(4, 5));
    print(output);
}
