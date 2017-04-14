#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // start
    int q; cin >> q;
    set<int> s;
    for (int i = 0; i < q; i++)
    {
        int y, x; cin >> y >> x;
        switch (y)
        {
        case 1:
            s.insert(x);
            break;
        case 2:
            s.erase(x);
            break;
        case 3:
        {
            auto it = s.find(x);
            if (it == s.end())
                cout << "No";
            else
                cout << "Yes";
            cout << endl;
            break;
        }
        default:
            break;
        }
    }
    // end
    return 0;
}
