#ifndef LEETCODE_TRIENODE_H
#define LEETCODE_TRIENODE_H

#include <cstring>

class TrieNode {
public:
    bool isKey;
    TrieNode *children[26];

    TrieNode() : isKey(false) {
        std::memset(children, 0, sizeof(TrieNode *) * 26);
    }
};


#endif //LEETCODE_TRIENODE_H
