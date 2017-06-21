#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// start
double median(const vector<int>& x)
{
    int n = x.size();
    if (n % 2)
        return x[n / 2];
    else
        return (x[n / 2] + x[n / 2 - 1]) / 2.0;
}
// end

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // start
    int n; cin >> n;
    vector<int> x(n);
    for (int i = 0; i < n; i++) cin >> x[i];
    sort(x.begin(), x.end());
    double q1, q2, q3;
    q2 = median(x);
    int m = n / 2;
    vector<int> l(m);
    vector<int> u(m);
    for (int i = 0; i < m; i++)
        l[i] = x[i];
    for (int i = n / 2.0 + 0.5, j = 0; i < n; i++, j++)
        u[j] = x[i];
    q1 = median(l);
    q3 = median(u);
    cout << q1 << endl << q2 << endl << q3;
    // end
    return 0;
}
