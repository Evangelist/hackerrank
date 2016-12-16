// https://www.hackerrank.com/challenges/30-binary-numbers
#include <iostream>
#include <string>
#include <map>
#include <vector>

#include <cstdio>
#include <cstdlib>

#define INPUT_FROM_FILE
//#define TESTCASES

using namespace std;

int a[6][6];

void process(void);
int process(int i, int j);

void process(void)
{
    int sum = 0;
    int maxsum = 0;
    for (int i = 0; i < 6; ++i)
    {
        for (int j = 0; j < 6; ++j)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            sum = process(i, j);
            if (sum > maxsum)
            {
                maxsum = sum;
            }
        }
    }
    cout << maxsum << endl;
}

int process(int i, int j)
{
    return (a[i][j] + a[i][j + 1] + a[i][j + 2]
        + a[i + 1][j + 1]
        + a[i + 2][j] + a[i + 2][j + 1] + a[i + 2][j + 2]);
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
