#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    // your code goes here
    // start
    sort(a.begin(), a.end());
    int min = pow(10, 9);
    for (int i = 1; i < n; i++)
    {
        int diff = abs(a[i] - a[i - 1]);
        if (min > diff)
            min = diff;
    }
    cout << min;
    // end
    return 0;
}
