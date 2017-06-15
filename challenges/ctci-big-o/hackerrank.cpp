#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int p;
    cin >> p;
    for(int a0 = 0; a0 < p; a0++){
        int n;
        cin >> n;
        // start
        if (n == 1)
        {
            cout << "Not prime" << endl;
            continue;
        }
        else if (n <= 3)
        {
            cout << "Prime" << endl;
            continue;
        }
        else if (n % 2 == 0 || n % 3 == 0)
        {
            cout << "Not prime" << endl;
            continue;
        }
        else
        {
            int j = 5;
            while (j * j <= n)
            {
                if (n % j == 0 || n % (j + 2) == 0)
                {
                    cout << "Not prime" << endl;
                    goto OUT;
                }
                j += 6;
            }
        }
        cout << "Prime" << endl;
OUT:
        ;
    }
    // end
    return 0;
}
