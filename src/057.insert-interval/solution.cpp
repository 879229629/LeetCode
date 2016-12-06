#include "solution.h"

std::vector<Interval> solution::insert(std::vector<Interval> &intervals, Interval newInterval) {
    if (intervals.empty()) return {newInterval};
    std::sort(intervals.begin(), intervals.end(), [](Interval &l, Interval &r) {
        return l.start < r.start;
    });
    std::vector<Interval> result;
    if (intervals[0].start > newInterval.end) {
        result.push_back(newInterval);
        for (auto it:intervals) result.push_back(it);
        return result;
    }

    bool found = false;

    for (auto it : intervals) {
        if (!found) {
            if (it.end < newInterval.start) {
                result.push_back(it);
                continue;
            } else {
                found = true;
                if (it.start > newInterval.end) {
                    result.push_back(newInterval);
                    result.push_back(it);
                } else {
                    result.push_back(
                            Interval(std::min(it.start, newInterval.start), std::max(it.end, newInterval.end)));
                }
            }
        } else {
            if (result.back().end < it.start) {
                result.push_back(it);
            } else {
                result.back().end = std::max(result.back().end, it.end);
            }
        }
    }
    if (result.back().end < newInterval.start) {
        result.push_back(newInterval);
    }
    return result;
}
