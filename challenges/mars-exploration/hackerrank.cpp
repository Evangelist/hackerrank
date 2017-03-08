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
    string S;
    cin >> S;
    // start
    int len = S.length();
    string expected;
    int mismatch = 0;
    for (int i = 0; i < len; i += 3)
    {
        expected += "SOS";
    }
    for (int i = 0; i < len; i++)
    {
        if (S[i] != expected[i])
        {
            mismatch++;
        }
    }
    cout << mismatch << endl;
    // end
    return 0;
}
