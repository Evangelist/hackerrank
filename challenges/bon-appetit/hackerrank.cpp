#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // start
    int n, k;
    cin >> n >> k;
    vector<int> c(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
        sum += c[i];
    }
    int charged;
    int actual = (sum - c[k]) / 2;
    cin >> charged;
    if (actual == charged)
    {
        cout << "Bon Appetit" << endl;
    }
    else
    {
        cout << charged - actual << endl;
    }
    // end
    return 0;
}
