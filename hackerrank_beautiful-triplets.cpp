// https://www.hackerrank.com/challenges/beautiful-triplets
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
    int number = 0;
    int n, d; cin >> n >> d;
    int a[n]; for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] - a[i] == d)
            {
                if (a[j + j - i] - a[j] == d)
                {
                    number++;
                    break;
                }
            }
            else if (a[j] - a[i] > d)
            {
                break;
            }
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
