#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// start
class Data
{
public:
    int x;
    string s;
};

bool customsort(Data a, Data b)
{
    return (a.x < b.x);
}
// end

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // start
    int n; cin >> n;
    vector<Data> ar(n);
    for (int i = 0; i < n / 2; i++)
    {
        cin >> ar[i].x >> ar[i].s;
        ar[i].s = "-";
    }
    for (int i = n / 2; i < n; i++)
        cin >> ar[i].x >> ar[i].s;
    for (int i = 0; i < 100; i++)
        for (auto a : ar)
            if (a.x == i)
                cout << a.s << " ";
    // end
    return 0;
}
