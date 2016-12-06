#include <iostream>

#include "solution.h"

int main(int argc, char *argv[]) {
    solution s;
    char s1[] = "abbabaaabbabbaababbabbbbbabbbabbbabaaaaababababbbabababaabbababaabbbbbbaaaabababbbaabbbbaabbbbababababbaabbaababaabbbababababbbbaaabbbbbabaaaabbababbbbaababaabbababbbbbababbbabaaaaaaaabbbbbaabaaababaaaabb";
    char s2[] = "**aa*****ba*a*bb**aa*ab****a*aaaaaa***a*aaaa**bbabb*b*b**aaaaaaaaa*a********ba*bbb***a*ba*bb*bb**a*b*bb";

    std::cout << s1 << "][" << s2 << std::endl;
    std::cout << "match: " << s.isMatch(s1, s2) << std::endl;
}