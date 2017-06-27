#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
// start
#include <iomanip>
// end
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // start
    double numerator, denominator; cin >> numerator >> denominator;
    int n; cin >> n;
    double p = numerator / denominator;
    double q = 1 - p;
    double sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += pow(q, n - i) * p;
    }
    cout << fixed << setprecision(3) << sum;
    // end
    return 0;
}
