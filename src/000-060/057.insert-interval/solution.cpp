#include "solution.h"

std::vector<Interval> solution::insert(std::vector<Interval> &intervals, Interval newInterval) {
    std::vector<Interval> result;
    int index = 0;

    while (index < intervals.size() && intervals[index].end < newInterval.start) {
        result.push_back(intervals[index]);
        ++index;
    }

    while (index < intervals.size() && intervals[index].start<=newInterval.end){
        newInterval.start = std::min(newInterval.start,intervals[index].start);
        newInterval.end = std::max(newInterval.end,intervals[index].end);
        ++index;
    }

    result.push_back(newInterval);

    while (index<intervals.size()) result.push_back(intervals[index++]);
    return result;
}
