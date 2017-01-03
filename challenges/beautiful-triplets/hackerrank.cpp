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
    int d; cin >> d;
    int number = 0;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            if (a[j] - a[i] == d)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (a[k] - a[j] == d)
                    {
                        number++;
                    }
                }
            }
        }
    }
    cout << number;
    // end
    return 0;
}
