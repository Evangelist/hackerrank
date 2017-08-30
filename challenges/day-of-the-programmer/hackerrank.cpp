#include <bits/stdc++.h>

using namespace std;

string solve(int year){
    // Complete this function
    // start
    vector<int> month = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int day = 0;
    stringstream ss;
    string ret;

    if (year <= 1917)
    {
        if (!(year % 4))
            month[1] = 29;
    }
    else if (year == 1918)
        month[1] = 15;
    else
    {
        if ((!(year % 4) && (year % 100)) || !(year % 400))
            month[1] = 29;
    }
    for (int i = 0; i < month.size() - 1; i++)
    {
        day += month[i];
        if (day == 256)
        {
            ss << setfill('0') << setw(2) << month[i] << ".";
            ss << setfill('0') << setw(2) << i + 1 << ".";
            ss << year;
            break;
        }
        else if (day > 256)
        {
            ss << setfill('0') << setw(2) << month[i] - (day - 256) << ".";
            ss << setfill('0') << setw(2) << i + 1 << ".";
            ss << year;
            break;
        }
    }
    ret = ss.str();
    return ret;
    // end
}

int main() {
    int year;
    cin >> year;
    string result = solve(year);
    cout << result << endl;
    return 0;
}
