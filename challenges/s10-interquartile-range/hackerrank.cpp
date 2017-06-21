#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
// start
#include <iomanip>
// end
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
    vector<int> f(n);
    int fsum = 0;
    for (int i = 0; i < n; i++) cin >> x[i];
    for (int i = 0; i < n; i++)
    {
        cin >> f[i];
        fsum += f[i];
    }
    vector<int> s;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < f[i]; j++)
            s.push_back(x[i]);
    sort(s.begin(), s.end());
    double q1, q3;
    int m = fsum / 2;
    vector<int> l(m);
    vector<int> u(m);
    for (int i = 0; i < m; i++)
        l[i] = s[i];
    for (int i = fsum / 2.0 + 0.5, j = 0; i < fsum; i++, j++)
        u[j] = s[i];
    q1 = median(l);
    q3 = median(u);
    cout << fixed << setprecision(1) << static_cast<double>(q3 - q1);
    // end
    return 0;
}
