#ifndef LEETCODE_273_SOLUTION_H_
#define LEETCODE_273_SOLUTION_H_

#include <string>
#include <vector>

class solution {
public:
    std::vector<std::string> LESS_THAN_20 = {"",
                                             "One",
                                             "Two",
                                             "Three",
                                             "Four",
                                             "Five",
                                             "Six",
                                             "Seven",
                                             "Eight",
                                             "Nine",
                                             "Ten",
                                             "Eleven",
                                             "Twelve",
                                             "Thirteen",
                                             "Fourteen",
                                             "Fifteen",
                                             "Sixteen",
                                             "Seventeen",
                                             "Eighteen",
                                             "Nineteen"};
    std::vector<std::string> TENS = {"",
                                     "Ten",
                                     "Twenty",
                                     "Thirty",
                                     "Forty",
                                     "Fifty",
                                     "Sixty",
                                     "Seventy",
                                     "Eighty",
                                     "Ninety"};
    std::vector<std::string> THOUSANDS = {"",
                                          "Thousand",
                                          "Million",
                                          "Billion"};

    std::string numberToWords(int num);

    std::string helper(int num);
};


#endif // LEETCODE_273_SOLUTION_H_
