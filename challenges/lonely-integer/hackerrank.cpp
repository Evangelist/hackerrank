#include <bits/stdc++.h>

using namespace std;

int lonelyinteger(vector <int> a) {
    // Complete this function
    // start
    map<int, int> m;
    for (auto au : a)
        m[au]++;
    for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
        if (it->second == 1)
            return it->first;
    return 0;
    // end
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    int result = lonelyinteger(a);
    cout << result << endl;
    return 0;
}
