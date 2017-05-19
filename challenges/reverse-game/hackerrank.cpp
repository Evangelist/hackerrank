#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    // start
    while (t--)
    {
        int n;
        int k;
        cin >> n >> k;
        vector<int> v(n);
        int a = 0;
        int b = n - 1;
        for (int i = 0; i < n; i += 2)
        {
            v[i] = b--;
            if (i + 1 < n)
                v[i + 1] = a++;

        }
        for (int i = 0; i < n; i++)
            if (v[i] == k)
            {
                cout << i << endl;
                break;
            }
    }
    // end
    return 0;
}
