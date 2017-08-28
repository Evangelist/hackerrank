#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // start
    int n;
    cin >> n;
    vector<int> ar(100);
    int number;
    for (int i = 0; i < n; i++)
    {
        cin >> number;
        ar[number]++;
    }
    for (int i = 0; i < 100; i++)
        for (int j = 0; j < ar[i]; j++)
            cout << i << " ";
    // end
    return 0;
}
