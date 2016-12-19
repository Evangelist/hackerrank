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
    int m;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    vector<int> b(m);
    for(int b_i = 0;b_i < m;b_i++){
       cin >> b[b_i];
    }
    // start
    int numofbetween = 0;
    for (int i = a[a.size() - 1]; i <= b[0]; i++)
    {
        //cout << i << endl;
        bool factor = true;
        for (int j = 0; j < n; j++)
        {
            if (i % a[j])
            {
                factor = false;
            }
        }
        for (int j = 0; j < m; j++)
        {
            if (b[j] % i)
            {
                factor = false;
            }
        }
        if (factor == true)
        {
            numofbetween++;
        }
    }
    cout << numofbetween << endl;
    // end
    return 0;
}
