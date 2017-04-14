#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // start
    int n; cin >> n;
    vector<int> x(n);
    for (int i = 0; i < n; i++)
        cin >> x[i];
    int q; cin >> q;
    vector<int> y(q);
    for (int i = 0; i < q; i++)
        cin >> y[i];
    for (int i = 0; i < q; i++)
    {
        vector<int>::iterator it = lower_bound(x.begin(), x.end(), y[i]);
        if (*it == y[i])
        {
            cout << "Yes " << it - x.begin() + 1 << endl;
        }
        else if (*it > y[i])
        {
            cout << "No " << it - x.begin() + 1 << endl;
        }
    }
    // end
    return 0;
}
