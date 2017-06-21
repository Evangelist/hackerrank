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
    double mean = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        mean += x[i];
    }
    mean /= n;
    double sd = 0;
    for (auto a : x)
    {
        sd += pow(a - mean, 2);
    }
    sd = sqrt(sd / n);
    cout << fixed << setprecision(1) << sd;
    // end
    return 0;
}
