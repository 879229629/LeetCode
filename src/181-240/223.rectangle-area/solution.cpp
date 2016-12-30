#include "solution.h"

#include <cstdlib>
#include <algorithm>

int solution::computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
    int sum = std::abs(A - C) * std::abs(B - D) + std::abs(E - G) * std::abs(F - H);
    int left = std::max(A, E);
    int right = std::max(std::min(C, G), left);
    int botton = std::max(B, F);
    int top = std::max(std::min(D, H), botton);
    return sum- (right-left)*(top-botton);
}
