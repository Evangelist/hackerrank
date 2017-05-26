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

int number_needed(string a, string b) {
    // start
    int number = 0;
    map<char, int> ma;
    map<char, int> mb;
    for (int i = 0; i < a.size(); i++)
        ma[a[i]]++;
    for (int i = 0; i < b.size(); i++)
        mb[b[i]]++;
    for (char i = 'a'; i <= 'z'; i++)
        number += abs(ma[i] - mb[i]);
    return number;
    // end
}

int main(){
    string a;
    cin >> a;
    string b;
    cin >> b;
    cout << number_needed(a, b) << endl;
    return 0;
}
