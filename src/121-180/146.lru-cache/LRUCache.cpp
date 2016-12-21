#include "LRUCache.h"

#include <iostream>

LRUCache::LRUCache(int capacity) {
    capacity_ = capacity;
}

int LRUCache::get(int key) {
    if (m_.find(key) == m_.end()) {
        return -1;
    } else {
        adjust(m_[key]);
        return m_[key]->second;
    }
}

void LRUCache::set(int key, int value) {
    if (m_.find(key) == m_.end()) {
        if (m_.size() == capacity_) {
            int k = list_.back().first;
            m_.erase(k);
            list_.pop_back();
        }
        list_.push_front(std::make_pair(key, value));
        m_[key] = list_.begin();
    } else {
        auto it = m_[key];
        it->second = value;
        adjust(it);
    }
}

int LRUCache::adjust(PList::iterator it) {
    int key = it->first;
    int value = it->second;
    list_.erase(it);
    list_.push_front(std::make_pair(key, value));
    m_[key] = list_.begin();
    return 0;
}
