#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // start
    freopen("input.txt", "r", stdin);
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int result = 1;
        while (n--)
        {
            result <<= 1;
            result %= 100000;
        }
        cout << result - 1 << endl;
    }
    // end
    return 0;
}
