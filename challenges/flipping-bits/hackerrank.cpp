#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // start
    unsigned int max = -1;
    int t; cin >> t;
    while (t--)
    {
        unsigned int i; cin >> i;
        cout << max - i << endl;
    }
    // end
    return 0;
}
