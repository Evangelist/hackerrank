#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // start
    map<string, int> m;
    int q; cin >> q;
    for (int i = 0; i < q; i++)
    {
        int type; cin >> type;
        switch (type)
        {
        case 1:
            {
                string x;
                int y;
                cin >> x >> y;
                auto it = m.find(x);
                if (it != m.end())
                    it->second += y;
                else
                    m.insert(make_pair(x, y));
                break;
            }
            case 2:
            {
                string x; cin >> x;
                m.erase(x);
                break;
            }
            case 3:
            {
                string x; cin >> x;
                auto it = m.find(x);
                if (it == m.end())
                    cout << "0";
                else
                    cout << it->second;
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
