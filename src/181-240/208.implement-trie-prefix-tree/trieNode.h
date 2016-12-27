#ifndef LEETCODE_208_TRIENODE_H_
#define LEETCODE_208_TRIENODE_H_

#include <vector>

class TrieNode {
public:
    bool isWord;
    TrieNode *arr[26];

    TrieNode() {
        isWord = false;
        memset(arr, 0, sizeof(arr));
    }
};

#endif // LEETCODE_208_TRIENODE_H_
