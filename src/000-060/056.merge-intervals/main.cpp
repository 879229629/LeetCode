#include <iostream>

#include "solution.h"


void print(const std::vector<Interval> &input) {
    for (auto it = input.begin(); it != input.end(); ++it) {
        std::cout << "[" << it->start << "," << it->end << "],";
    }
    std::cout << std::endl;
}

int main(int argc, char *argv[]) {
    std::vector<Interval> input = {Interval(1, 4), Interval(2, 3)};
    print(input);
    solution s;
    std::vector<Interval> output = s.merge(input);
    print(output);
}