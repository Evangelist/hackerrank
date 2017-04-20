#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // start
    int n, d;
    cin >> n >> d;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    d %= n;
    for (int i = 0; i < n; i++)
    {
        if (d == n)
            d = 0;
        cout << v[d++] << ' ';
    }
    // end
    return 0;
}
