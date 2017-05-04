#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

#define INPUT_FROM_FILE

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // start
#ifdef INPUT_FROM_FILE
    freopen("input.txt", "r", stdin);
#endif
    vector<int> v;
    vector<int> v1;
    int n; cin >> n;
    int t, x;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        switch (t)
        {
        case 1:
            cin >> x;
            v.push_back(x);
            if (!v1.empty())
            {
                if (x > v1.back())
                    v1.push_back(x);
                else
                    v1.push_back(v1.back());
            }
            else
                v1.push_back(x);
            break;
        case 2:
            v.pop_back();
            v1.pop_back();
            break;
        case 3:
        {
            //vector<int> v1(v);
            //sort(v1.begin(), v1.end());
            cout << v1.back() << endl;
            break;
        }
        default:
            break;
        }
    }
    // end
    return 0;
}
