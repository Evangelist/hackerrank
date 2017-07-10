#include <bits/stdc++.h>

using namespace std;

long solve(long n) {
    // Complete this function
    // start
    int count = 0;
    while (n)
    {
        if ((n & 1) ^ 1 == 1)
            count++;
        n /= 2;
    }
    return pow(2, count);
    // end
}

int main() {
    long n;
    cin >> n;
    long result = solve(n);
    cout << result << endl;
    return 0;
}
