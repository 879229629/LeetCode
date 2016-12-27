#include <iostream>

#include "trie.h"

int main(int argc, char *argv[]) {
    Trie *t = new Trie();
    t->insert("ab");
    std::cout << t->search("a") << " \n";
    std::cout << t->startsWith("a") << " \n";
}