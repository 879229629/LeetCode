#include "solution.h"
#include <iostream>

void solution::reverseWords(std::string &s) {
    int len = s.length();

    int begin = 0;
    int end = len - 1;
    while (begin < end) std::swap(s[begin++], s[end--]);

    begin = 0;
    end = len - 1;
    while (begin <= end) {
        while (begin <= end && s[begin] == ' ') ++begin;
        int pos = begin;
        while (pos <= end && s[pos] != ' ') ++pos;
        int i = begin;
        int j = pos - 1;
        while (i < j) std::swap(s[i++], s[j--]);
        begin = pos;
    }
    int k = 0;
    int i = 0;
    while (i < len) {
        if (s[i] == ' ') {
            ++i;
            if (k >= 1 && s[k - 1] != ' ') s[k++] = ' ';
        } else {
            s[k++] = s[i];
            ++i;
        }
    }
    if (k > 0 && s[k - 1] == ' ') --k;
    s.erase(k);
}
