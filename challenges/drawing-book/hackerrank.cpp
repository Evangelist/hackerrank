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
    int p;
    cin >> p;
    // your code goes here
    // start
    n = (n / 2) * 2;
    p = (p / 2) * 2;
    //cout << n << ' ' << p << endl;
    if (p < n - p)
    {
        cout << p / 2 << endl;
    }
    else
    {
        cout << (n - p) / 2 << endl;
    }
    // end
    return 0;
}
