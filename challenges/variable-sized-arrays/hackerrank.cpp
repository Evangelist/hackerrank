#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // start
    int n, q;
    vector<vector<int>> array;
    cin >> n >> q;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        vector<int> array1(k);
        for (int j = 0; j < k; j++)
        {
            cin >> array1[j];
        }
        array.push_back(array1);
    }
    for (int i = 0; i < q; i++)
    {
        int ii, jj;
        cin >> ii >> jj;
        cout << array[ii][jj] << endl;
    }
    // end
    return 0;
}
