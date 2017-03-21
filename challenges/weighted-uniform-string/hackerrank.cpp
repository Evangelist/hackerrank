#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    string s;
    cin >> s;
    // start
    std::vector<int> v;
    v.push_back(s[0] - 'a' + 1);
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
        {
            v.push_back(v.back() + (s[i] - 'a' + 1));
        }
        else
        {
            v.push_back(s[i] - 'a' + 1);
        }
    }
    // end

    int n;
    cin >> n;
    for(int a0 = 0; a0 < n; a0++){
        int x;
        cin >> x;
        // your code goes here
        // start
        bool found = false;
        if (find(v.begin(), v.end(), x) != v.end())
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
        // end
    }
    return 0;
}
