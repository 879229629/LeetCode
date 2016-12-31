#ifndef LEETCODE_227_SOLUTION_H_
#define LEETCODE_227_SOLUTION_H_

#include <string>
#include <stack>
#include <iostream>

class solution {
public:
    int calculate(std::string s) {
        int sum = 0;
        int result = 0;
        int i = 0;
        int flag = 1;
        char lastOp = ' ';
        while (i < s.length()) {
            if (s[i] == ' ') {
                ++i;
            } else if (s[i] == '+' || s[i] == '-') {
                sum += result * flag;
                lastOp = s[i];
                result = 0;
                flag = s[i++] == '-' ? -1 : 1;
            } else if (s[i] == '*' || s[i] == '/') {
                lastOp = s[i];
                ++i;
            } else {
                int last = 0;
                while (isdigit(s[i])) {
                    last = last * 10 + s[i] - '0';
                    ++i;
                }
                if (lastOp == '*') result = result * last;
                else if (lastOp == '/') result = result / last;
                else result = last;
            }
        }
        return sum + result * flag;
    }
};


#endif // LEETCODE_227_SOLUTION_H_
