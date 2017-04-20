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
    vector<string> vn(n);
    for (int i = 0; i < n; i++)
        cin >> vn[i];
    int q; cin >> q;
    vector<string> vq(q);
    for (int i = 0; i < q; i++)
        cin >> vq[i];
    for (int i = 0; i < q; i++)
    {
        int number = 0;
        for (int j = 0; j < n; j++)
        {
            if (vq[i] == vn[j])
                number++;
        }
        cout << number << endl;
    }
    // end
    return 0;
}
