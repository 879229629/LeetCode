#ifndef LEETCODE_056_SOLUTION_H_
#define LEETCODE_056_SOLUTION_H_

#include <vector>

struct Interval {
    int start;
    int end;

    Interval() : start(0), end(0) {}

    Interval(int s, int e) : start(s), end(e) {}
};

class solution {
public:
    std::vector<Interval> merge(std::vector<Interval> &intervals);

};


#endif // LEETCODE_056_SOLUTION_H_
