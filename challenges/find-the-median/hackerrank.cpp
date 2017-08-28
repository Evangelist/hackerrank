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
    vector<int> ar(n);
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    sort(ar.begin(), ar.end());
    cout << ar[n / 2];
    // end
    return 0;
}
