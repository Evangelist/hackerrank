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
    int Q;
    cin >> Q;
    for(int a0 = 0; a0 < Q; a0++){
        int n;
        cin >> n;
        string b;
        cin >> b;
        // start
        map<char, int> ladybug;
        for (int i = 0; i < n; i++)
        {
            ladybug[b[i]]++;
        }
        for (map<char, int>::iterator it = ladybug.begin(); it != ladybug.end(); ++it)
        {
            cout << it->first << ": " << it->second << endl;
        }
        // end
    }
    return 0;
}
