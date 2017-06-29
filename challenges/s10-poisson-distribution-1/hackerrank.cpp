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
    double lambda = 2.5;
    double k = 5;
    cout << fixed << setprecision(3) << (pow(lambda, k) * exp(-lambda) / factorial(k));
    return 0;
}
