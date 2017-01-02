#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // start
    int day = 5;
    int sum = 0;
    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (i)
        {
            day *= 3;
        }
        day /= 2;
        sum += day;
    }
    cout << sum << endl;
    // end
    return 0;
}
