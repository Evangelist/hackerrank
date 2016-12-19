#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
// start
#include <cstring>
#include <cstdlib>
// end
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // start
    int i, j, k;
    int beautiful = 0;
    cin >> i >> j >> k;
    for (int n = i; n <= j; n++)
    {
        //string sn = to_string(n);
        char sn[10];
        int ns;
        sprintf(sn, "%d", n);
        reverse(sn, sn + strlen(sn));
        ns = atoi(sn);
        //cout << n << endl << ns << endl;
        int sub = abs(n - ns);
        if (!(sub % k))
        {
            beautiful++;
        }
    }
    cout << beautiful << endl;
    // end
    return 0;
}
