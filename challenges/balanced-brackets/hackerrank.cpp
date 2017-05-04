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

#define INPUT_FROM_FILE

using namespace std;


int main(){
#ifdef INPUT_FROM_FILE
    freopen("input.txt", "r", stdin);
#endif
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string s;
        cin >> s;
        // start
        stack<char> st;
        bool balanced = true;

        for (int i = 0; i < s.size(); i++)
        {
            switch (s[i])
            {
            case '(':
            case '{':
            case '[':
                st.push(s[i]);
                break;

            case ')':
                if (st.empty())
                    balanced = false;
                else if (st.top() == '(')
                    st.pop();
                else
                    balanced = false;
                break;

            case '}':
                if (st.empty())
                    balanced = false;
                else if (st.top() == '{')
                    st.pop();
                else
                    balanced = false;
                break;

            case ']':
                if (st.empty())
                    balanced = false;
                else if (st.top() == '[')
                    st.pop();
                else
                    balanced = false;
                break;

            default:
                break;
            }
            if (!balanced) break;
        }
        if (!st.empty())
            balanced = false;
        cout << (balanced ? "YES" : "NO") << endl;
        // end
    }
    return 0;
}
