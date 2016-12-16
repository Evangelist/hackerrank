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
    // start
    const int n = 26;
    // end
    vector<int> h(n);
    for(int h_i = 0;h_i < n;h_i++){
       cin >> h[h_i];
    }
    string word;
    cin >> word;
    // start
    int max = 0;
    for (int i = 0; i < word.length(); i++)
    {
        if (max < h[word[i] - 'a'])
        {
            max = h[word[i] - 'a'];
        }
    }
    cout << max * word.length() << endl;
    // end
    return 0;
}
