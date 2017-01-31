#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // start
    /*
    function is_prime(integer)
        if n ≤ 1
            return false
        else if n ≤ 3
            return true
        else if n mod 2 = 0 or n mod 3 = 0
            return false
        let i ← 5
        while i×i ≤ n
            if n mod i = 0 or n mod (i + 2) = 0
                return false
            i ← i + 6
        return true
    */
    int t; cin >> t;
    int n[t];
    for (int i = 0; i < t; i++) cin >> n[i];
    for (int i = 0; i < t; i++)
    {
        if (n[i] == 1)
        {
            cout << "Not prime" << endl;
            continue;
        }
        else if (n[i] <= 3)
        {
            cout << "Prime" << endl;
            continue;
        }
        else if (n[i] % 2 == 0 || n[i] % 3 == 0)
        {
            cout << "Not prime" << endl;
            continue;
        }
        else
        {
            int j = 5;
            while (j * j <= n[i])
            {
                if (n[i] % j == 0 || n[i] % (j + 2) == 0)
                {
                    cout << "Not prime" << endl;
                    goto OUT;
                }
                j += 6;
            }
        }
        cout << "Prime" << endl;
OUT:
        ;
    }
    // end
    return 0;
}
