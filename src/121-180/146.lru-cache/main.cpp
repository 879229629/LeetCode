#include <iostream>

#include "LRUCache.h"

int main(int argc, char *argv[]) {
    LRUCache cache(2);
    cache.get(2);
    cache.set(2,6);


//    cache.get(1);
    cache.set(1,5);


    std::cout << cache.get(1) << std::endl;
    std::cout << cache.get(2) << std::endl;


    cache.set(1,2);


}