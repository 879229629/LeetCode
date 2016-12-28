#ifndef LEETCODE_TRIENODE_H
#define LEETCODE_TRIENODE_H

#include <cstring>
#include <algorithm>

class TrieNode {
public:
    bool isKey;
    TrieNode *children[26];
    int pos;

    TrieNode() : isKey(false) {
        std::fill_n(children, 26, nullptr);
    }
};


#endif //LEETCODE_TRIENODE_H
