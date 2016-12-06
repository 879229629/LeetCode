#include "solution.h"

std::vector<Interval> solution::merge(std::vector<Interval> &intervals) {
    if (intervals.empty()) return {};

    std::sort(intervals.begin(), intervals.end(), [](Interval &l, Interval &r) {
        return l.start < r.start;
    });

    int from = intervals[0].start;
    int to = intervals[0].end;

    std::vector<Interval> result;

    for (int i = 1; i < intervals.size(); ++i) {
        if (to < intervals[i].start) {
            result.push_back(Interval(from, to));
            from = intervals[i].start;
            to = intervals[i].end;
        } else {
            to = std::max(to, intervals[i].end);
        }
    }
    result.push_back(Interval(from, to));
    return result;
}
