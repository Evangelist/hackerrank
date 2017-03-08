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
    string B;
    cin >> B;
    // start
    const string beautiful = "010";
    int match = 0;
    for (int i = 0 ; i < n; i++)
    {
        if (!B.compare(i, 3, beautiful))
        {
            match++;
            i += 2;
        }
    }
    cout << match << endl;
    // end
    return 0;
}
