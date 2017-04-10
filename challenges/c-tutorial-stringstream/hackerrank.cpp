#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    // Complete this function
    // start
    stringstream ss(str);
    int number = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == ',')
            number++;
    }
    vector<int> parsed(number + 1);
    for (int i = 0; i <= number; i++)
    {
        char ch;
        ss >> parsed[i];
        if (i < number)
            ss >> ch;
    }
    return parsed;
    // end
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
