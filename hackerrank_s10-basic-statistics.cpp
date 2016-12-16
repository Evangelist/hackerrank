// https://www.hackerrank.com/challenges/s10-basic-statistics
#include <iostream>
#include <algorithm>
#include <vector>

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>

#define INPUT_FROM_FILE
//#define TESTCASES

using namespace std;

void process(void);

void process(void)
{
    int n; cin >> n;
    float x[n];
    for (int i = 0; i < n; ++i) cin >> x[i];

    float mean, sum = 0;
    for (int i = 0; i < n; ++i)
        sum += x[i];
    mean = sum / n;
    cout << floor(mean * 10) / 10 << endl;

    float median;
    vector<int> v(x, x + n);
    sort(v.begin(), v.end());
    //for (vector<int>::iterator it = v.begin(); it < v.end(); ++it)
    //    cout << *it << endl;
    if (n % 2)
    {
        median = v[n / 2];
    }
    else
    {
        median = (v[n / 2] + v[n / 2 - 1]) / 2.0;
    }
    cout << median << endl;
}

int main(void)
{
#ifdef INPUT_FROM_FILE
    freopen("input.txt", "r", stdin);
#endif

#ifdef TESTCASES
    int t; cin >> t;
#else
    int t = 1;
#endif

    for (int i = 0; i < t; i++) process();
    return 0;
}
