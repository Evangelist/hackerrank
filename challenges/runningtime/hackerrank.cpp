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
    int number = 0;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - (1 + i); j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                number++;
                /*
                cout << "(" << i << ", " << j << ") ";
                for (auto e : a)
                    cout << e << " ";
                cout << endl;
                */
            }
        }
    }
    cout << number;
    // end
    return 0;
}
