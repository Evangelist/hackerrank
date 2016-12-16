// https://www.hackerrank.com/challenges/reduced-string
#include <iostream>
#include <algorithm>

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
    string s; cin >> s;
    int numofupper = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z') numofupper++;
    }
    cout << numofupper + 1;
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
