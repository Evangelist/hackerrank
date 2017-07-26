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
    string s; cin >> s;
    int level = 0;
    int number = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'U')
        {
            if (++level == 0)
            {
                number++;
            }
        }
        else if (s[i] == 'D') level--;
    }
    cout << number;
    // end
    return 0;
}
