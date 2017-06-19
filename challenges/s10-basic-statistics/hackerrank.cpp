#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
// start
#include <iomanip>
#include <map>
// end
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // start
    int n; cin >> n;
    vector<int> x(n);
    for (int i = 0; i < n; i++) cin >> x[i];
    // mean
    double mean = 0;
    for (int i = 0; i < n; i++)
        mean += x[i];
    cout << fixed << setprecision(1) << mean / n << endl;
    // median
    sort(x.begin(), x.end());
    double median = n % 2 ? x[n / 2] : (x[n / 2] + x[n / 2 - 1]) / 2.0;
    cout << median << endl;
    // mode
    map<int, int> mode;
    for (int i = 0; i < n; i++) mode[x[i]]++;
    int freq = 0;
    for (map<int, int>::iterator it = mode.begin(); it != mode.end(); it++)
        if (freq < it->second) freq = it->second;
    for (map<int, int>::iterator it = mode.begin(); it != mode.end(); it++)
        if (freq == it->second)
        {
            cout << it->first;
            break;
        }
    // end
    return 0;
}
