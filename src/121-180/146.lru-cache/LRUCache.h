#ifndef LEETCODE_146_LRUCACHE_H_
#define LEETCODE_146_LRUCACHE_H_

#include <map>
#include <vector>
#include <list>

class LRUCache {
public:
    typedef std::list<std::pair<int, int>> PList;

    std::map<int, PList::iterator> m_;
    PList list_;

    int capacity_;

    LRUCache(int capacity);

    int get(int key);

    void set(int key, int value);

    int adjust(PList::iterator it);
};


#endif //LEETCODE_146_LRUCACHE_H_
