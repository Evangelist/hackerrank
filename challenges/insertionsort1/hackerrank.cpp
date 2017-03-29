#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
void insertionSort(vector <int>  ar) {
    // start
    int e = *ar.rbegin();
    int e1 = *(ar.rbegin() + 1);
    for (vector<int>::reverse_iterator rit = ar.rbegin() + 1; rit != ar.rend(); rit++)
    {
        //cout << *rit << " ";
        if (e > *rit)
        {
            *(rit - 1) = e;
            for (vector<int>::iterator it = ar.begin(); it != ar.end(); it++)
            {
                cout << *it << " ";
            }
            break;
        }
        else
        {
            *(rit - 1) = *rit;
            for (vector<int>::iterator it = ar.begin(); it != ar.end(); it++)
            {
                cout << *it << " ";
            }
            cout << endl;
            if (rit == ar.rend() - 1)
            {
                *rit = e;
                for (vector<int>::iterator it = ar.begin(); it != ar.end(); it++)
                {
                    cout << *it << " ";
                }
            }
        }
    }
    // end
}
int main(void) {
    vector <int>  _ar;
    int _ar_size;
    cin >> _ar_size;
    for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar.push_back(_ar_tmp);
    }

    insertionSort(_ar);
    return 0;
}
