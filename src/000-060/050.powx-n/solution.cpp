#include "solution.h"


double solution::myPow(double x, int n) {
    if (n == 0) return 1;
    if (n < 0) return 1 / (x * myPow(x, -n - 1));
    if (n == 1) return x;
    if (n == 2) return x * x;
    if (n % 2 == 1) return x * myPow(x, n - 1);
    return myPow(myPow(x, n / 2), 2);
}
