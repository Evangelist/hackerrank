#include <bits/stdc++.h>

using namespace std;

int main(){
    // start
    const string hackerrank = "hackerrank";
    // end
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        // your code goes here
        // start
        int index = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == hackerrank[index])
            {
                index++;
            }
        }
        //cout << index << endl;
        if (index == hackerrank.size())
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << endl;
        // end
    }
    return 0;
}
