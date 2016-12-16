// https://www.hackerrank.com/challenges/new-year-chaos
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

#define INPUT_FROM_FILE
#define TESTCASES

using namespace std;

void process(void);

void process(void)
{
    int n; cin >> n;
    int p[n];
    int number = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        if (p[i] - i > 3)
        {
            cout << "Too chaotic" << endl;
            return;
        }
    }
    cout << number << endl;
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
