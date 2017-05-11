#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // start
    freopen("input.txt", "r", stdin);
    vector<string> v;
    string s;
    int q; cin >> q;
    for (int i = 0; i < q; i++)
    {
        int t; cin >> t;
        switch (t)
        {
        case 1:
            {
                string w; cin >> w;
                s += w;
                v.push_back(s);
                break;
            }
        case 2:
            {
                int k; cin >> k;
                for (int i = 0; i < k; i++)
                    s.pop_back();
                v.push_back(s);
                break;
            }
        case 3:
            {
                int k; cin >> k;
                cout << s[k - 1] << endl;
                break;
            }
        case 4:
            {
                v.pop_back();
                if (v.empty())
                    s.clear();
                else
                    s = v.back();
                break;
            }
        default:
            break;
        }
    }
    // end
    return 0;
}
