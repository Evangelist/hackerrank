#include <bits/stdc++.h>

using namespace std;

int birthdayCakeCandles(int n, vector <int> ar) {
    // Complete this function
    // start
    int ret = 1;
    sort(ar.begin(), ar.end());
    for (vector<int>::reverse_iterator rit = ar.rbegin() + 1; rit != ar.rend(); rit++)
    {
        if (*rit == *(ar.rbegin()))
            ret++;
        else
            break;
    }
    return ret;
    // end
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = birthdayCakeCandles(n, ar);
    cout << result << endl;
    return 0;
}
