#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
// start
#include <iomanip>
// end
using namespace std;

// start
long factorial(int v)
{
    return (v == 0 || v == 1) ? 1 : v * factorial(v - 1);
}
// end

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // start
    const double success = 1.09;
    const double failure = 1;
    const int n = 6;
    const double p = success / (success + failure);
    const double q = 1 - p;
    double b = 0;
    for (int x = 3; x <= 6; x++)
    {
        b += (factorial(n) / (factorial(x) * factorial(n - x)))
            * pow(p, x) * pow(q, n - x);
    }
    cout << fixed << setprecision(3) << b;
    // end
    return 0;
}
