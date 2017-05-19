#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// start
int gcd(int p, int q)
{
    if (q == 0) return p;
    return gcd(q, p%q);
}
// end

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // start
    int t; cin >> t;
    while (t--)
    {
        int a, b; cin >> a >> b;
        if (a < b)
            swap(a, b);
        int g = gcd(a, b);
        cout << a * b / (g * g) << endl;
    }
    // end
    return 0;
}
