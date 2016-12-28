#include <iostream>

#include "wordDictionary.h"

int main(int argc, char *argv[]) {
    WordDictionary wd;
    wd.addWord("ab");
    std::cout << wd.search("a.");

}