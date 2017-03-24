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
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    // start
    map<int, int> count;
    int maximum = 0;
    for (int i = 0; i < n; i++)
    {
        count[a[i]]++;
    }
    for (map<int, int>::iterator it = count.begin(); it != count.end(); it++)
    {
        //cout << it->first << ':' << it->second << ' ';
        maximum = max(maximum, it->second);
        if (next(it) != count.end() && next(it)->first - it->first == 1)
        {
            maximum = max(maximum, it->second + next(it)->second);
        }
    }
    cout << maximum << endl;
    // end
    return 0;
}
