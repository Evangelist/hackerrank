#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // start
    int t; cin >> t;
    while (t--)
    {
        long long k; cin >> k;
        if (k % 2)
        {
            cout << (k / 2) * (k / 2) + (k / 2) << endl;
        }
        else
        {
            cout << (k / 2) * (k / 2) << endl;
        }
    }
    // end
    return 0;
}
