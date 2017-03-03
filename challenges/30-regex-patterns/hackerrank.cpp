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
// start
#include <regex>
// end

using namespace std;


int main(){
    int N;
    cin >> N;
    // start
    vector<string> v;
    regex e("[a-z.]+@gmail.com");
    // end
    for(int a0 = 0; a0 < N; a0++){
        string firstName;
        string emailID;
        cin >> firstName >> emailID;
        // start
        if (regex_match(emailID, e))
        {
            //cout << emailID << endl;
            v.push_back(firstName);
        }
        // end
    }
    // start
    sort(v.begin(), v.end());
    for (vector<string>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    }
    // end
    return 0;
}
