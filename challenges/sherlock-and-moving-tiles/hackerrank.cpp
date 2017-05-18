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
    int l, s1, s2; cin >> l >> s1 >> s2;
    int q; cin >> q;
    while (q--)
    {
        double qi; cin >> qi;
        double t = (sqrt(2.0) * l - sqrt(2.0 * qi)) / (double)abs(s1 - s2);
        cout << fixed << t << endl;
    }
    // end
    return 0;
}
