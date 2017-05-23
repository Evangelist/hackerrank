#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // start
    int n, m; cin >> n >> m;
    long long t = 0;
    while (m--)
    {
        int a, b;
        long long k;
        cin >> a >> b >> k;
        t += (b - a + 1) * k;
    }
    cout << t / n << endl;
    // end
    return 0;
}
