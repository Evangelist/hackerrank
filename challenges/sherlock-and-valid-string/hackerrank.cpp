#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
// start
#include <map>
// end
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // start
    string s;
    map<char, int> count;
    vector<int> count2;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        count[s[i]]++;
    }
    for (map<char, int>::iterator it = count.begin(); it != count.end(); it++)
    {
        count2.push_back(it->second);
    }
    if (count2.size() == 1)
    {
        cout << "YES" << endl;
        return 0;
    }
    sort(count2.begin(), count2.end());
    for (int i = 2; i < count2.size() - 1; i++)
    {
        if (count2[i] != count2[i - 1])
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    int zero = count2[0];
    int first = count2[1];
    int prevlast = count2[count2.size() - 2];
    int last = count2[count2.size() - 1];
    //cout << zero << ' ' << first << ' ' << prevlast << ' ' << last << endl;
    if ((zero == 1 && prevlast == last)
        || (zero == first && prevlast == last)
        || (zero == first && prevlast + 1 == last))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    // end
    return 0;
}
