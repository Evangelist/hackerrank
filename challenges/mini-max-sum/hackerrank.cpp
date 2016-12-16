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
    long int a;
    long int b;
    long int c;
    long int d;
    long int e;
    cin >> a >> b >> c >> d >> e;
    // start
    vector<long int> numbers;
    numbers.push_back(a);
    numbers.push_back(b);
    numbers.push_back(c);
    numbers.push_back(d);
    numbers.push_back(e);
    sort(numbers.begin(), numbers.end());
    long int sum = numbers[0] + numbers[1] + numbers[2] + numbers[3] + numbers[4];
    cout << sum - numbers[4] << ' ' << sum - numbers[0] << endl;
    // end
    return 0;
}
