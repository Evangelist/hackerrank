#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // start
    int actual_day, actual_month, actual_year;
    int expected_day, expected_month, expected_year;
    int fine;

    cin >> actual_day >> actual_month >> actual_year;
    cin >> expected_day >> expected_month >> expected_year;

    if (actual_year < expected_year)
    {
        fine = 0;
    }
    else (actual_year == expected_year)
    {
        if (actual_month < expected_month)
        {
            fine = 0;
        }
        else if (actual_month == expected_month)
        {
            if (actual_day <= expected_day)
            {
                fine = 0;
            }
            else
            {
                fine = (actual_day > expected_day) * 15;
            }
        }
        else
        {
            fine = (actual_month > expected_month) * 500;
        }
    }
    else
    {
        fine = 10000;
    }

    cout << fine << endl;
    // end
    return 0;
}
