#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cassert>
#include <iostream>
using namespace std;
void insertionSort(int ar_size, int *  ar) {
    // start
    for (int i = 1; i < ar_size; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (ar[j - 1] > ar[j])
            {
                int swap = ar[j - 1];
                ar[j - 1] = ar[j];
                ar[j] = swap;
            }
        }
        for (int j = 0; j < ar_size; j++)
        {
            cout << ar[j] << " ";
        }
        cout << endl;
    }
    // end
}
int main(void) {

    int _ar_size;
    cin >> _ar_size;
    //scanf("%d", &_ar_size);
    int _ar[_ar_size], _ar_i;
    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) {
        cin >> _ar[_ar_i];
        //scanf("%d", &_ar[_ar_i]);
    }

   insertionSort(_ar_size, _ar);

   return 0;
}
