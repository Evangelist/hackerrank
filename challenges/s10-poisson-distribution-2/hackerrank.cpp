#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
// start
#include <iomanip>
// end
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // start
    double lambda1 = 0.88;
    double lambda2 = 1.55;
    cout << fixed << setprecision(3);
    cout << 160 + 40 * (lambda1 * lambda1 + lambda1) << endl;
    cout << 128 + 40 * (lambda2 * lambda2 + lambda2) << endl;
    // end
    return 0;
}
