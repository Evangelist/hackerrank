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
    vector<int> a(n);
    vector<int> b(n - 1);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    //for (auto i : a)
    //    cout << i << " ";
    //cout << endl;
    for (int i = 0; i < n - 1; i++)
        b[i] = a[i + 1] - a[i];
    //for (auto i : b)
    //    cout << i << " ";
    //cout << endl;
    sort(b.begin(), b.end());
    for (int i = 0; i < n - 1; i++)
        if (a[i + 1] - a[i] == b[0])
            cout << a[i] << " " << a[i + 1] << " ";
    // end
    return 0;
}
