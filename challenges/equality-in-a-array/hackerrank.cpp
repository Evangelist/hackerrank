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
    int a;
    vector<int> count(100, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        count[a - 1]++;
    }
    sort(count.begin(), count.end());
    cout << n - *(count.end() - 1) << endl;
    // end
    return 0;
}
