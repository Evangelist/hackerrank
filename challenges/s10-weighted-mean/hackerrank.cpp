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
    int n; cin >> n;
    vector<int> x(n);
    vector<int> w(n);
    for (int i = 0; i < n; i++) cin >> x[i];
    int divisor = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
        divisor += w[i];
    }
    double wmean = 0;
    for (int i = 0; i < n; i++) wmean += x[i] * w[i];
    wmean /= divisor;
    cout << fixed << setprecision(1) << wmean;
    // end
    return 0;
}
