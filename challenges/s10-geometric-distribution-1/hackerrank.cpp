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
    cout << fixed << setprecision(3) << pow(1 - (numerator / denominator), n - 1) * (numerator / denominator);
    // end
    return 0;
}
