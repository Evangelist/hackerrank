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
    long long n; // fixed
    cin >> n;
    // start
    int numofa = 0;
    long long totalnumofa = 0;
    long long a1 = n / s.length();
    long long a2 = n % s.length();
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a') numofa++;
    }
    totalnumofa = numofa * a1;
    for (int i = 0; i < a2; i++)
    {
        if (s[i] == 'a') totalnumofa++;
    }
    cout << totalnumofa << endl;
    // end
    return 0;
}
