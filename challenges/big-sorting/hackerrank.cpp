#include <bits/stdc++.h>

using namespace std;

// start
bool stringsort(string& a, string& b)
{
    if (a.size() != b.size())
        return (a.size() < b.size());
    else
        return (a < b);
}
// end

int main(){
    ///freopen("input.txt", "r", stdin);
    int n;
    cin >> n;
    vector<string> unsorted(n);
    for(int unsorted_i = 0; unsorted_i < n; unsorted_i++){
       cin >> unsorted[unsorted_i];
    }
    // your code goes here
    // start
    sort(unsorted.begin(), unsorted.end(), stringsort);
    for (int i = 0; i < n; i++)
        cout << unsorted[i] << endl;
    ///fclose(stdin);
    // end
    return 0;
}
