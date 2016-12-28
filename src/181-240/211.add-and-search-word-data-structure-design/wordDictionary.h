#ifndef LEETCODE_211_WORDDICTIONARY_H_
#define LEETCODE_211_WORDDICTIONARY_H_

#include <string>
#include <set>

#include "../../common/trieNode.h"

class WordDictionary {
public:
    TrieNode *root_;

    WordDictionary() {
        root_ = new TrieNode();
    }

    void addWord(std::string word) {
        TrieNode *p = root_;
        for (int i = 0; i < word.length(); ++i) {
            int pos = word[i] - 'a';
            if (p->children[pos] == nullptr) p->children[pos] = new TrieNode();
            p = p->children[pos];
        }
        p->isKey = true;
    }

    bool search(std::string word) {
        return match(word, 0, root_);
    }

    bool match(const std::string &word, int pos, TrieNode *root) {
        if (root == nullptr) return false;
        if (pos >= word.length()) return root->isKey;
        char c = word[pos];
        if (c != '.' && root->children[c - 'a'] == nullptr) return false;
        if (c == '.') {
            for (int i = 0; i < 26; ++i) {
                if (root->children[i] == nullptr) continue;
                if (match(word, pos + 1, root->children[i])) return true;
            }
            return false;
        } else {
            return match(word, pos + 1, root->children[c - 'a']);
        }
    }
};


#endif //LEETCODE_211_WORDDICTIONARY_H_
