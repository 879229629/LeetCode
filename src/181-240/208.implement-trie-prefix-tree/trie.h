#ifndef LEETCODE_208_TRIE_H_
#define LEETCODE_208_TRIE_H_

#include <string>
#include <iostream>

#include "trieNode.h"

class Trie {
public:
    Trie() {
        root = new TrieNode();
    }

    // Inserts a word into the trie.
    void insert(std::string word) {
        TrieNode *p = root;
        for (char c:word) {
            int i = c - 'a';
            if(p->arr[i] == nullptr) p->arr[i] = new TrieNode();
            p = p->arr[i];
        }
        p->isWord = true;
    }

    // Returns if the word is in the trie.
    bool search(std::string word) {
        TrieNode *p = root;
        for (char c:word) {
            int i = c - 'a';
            if (p->arr[i] == nullptr) return false;
            p = p->arr[i];
        }
        return p->isWord;
    }

    // Returns if there is any word in the trie
    // that starts with the given prefix.
    bool startsWith(std::string prefix) {
        TrieNode *p = root;
        for (char c:prefix) {
            int i = c - 'a';
            if (p->arr[i] == nullptr) return false;
            p = p->arr[i];
        }
        return true;
    }

private:
    TrieNode *root;
};

#endif //LEETCODE_208_TRIE_H_
