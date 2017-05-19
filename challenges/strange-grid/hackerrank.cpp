#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // start
    long long r, c; cin >> r >> c;
    vector<long long> v1 = {0, 2, 4, 6, 8};
    vector<long long> v2 = {1, 3, 5, 7, 9};
    if (r % 2)
        cout << ((r - 1) / 2) * 10 + v1[c - 1];
    else
        cout << ((r - 1) / 2) * 10 + v2[c - 1];
    // end
    return 0;
}
