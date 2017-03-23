#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> types(n);
    for(int types_i = 0; types_i < n; types_i++){
       cin >> types[types_i];
    }
    // your code goes here
    // start
    map<int, int> bird;
    for (int i = 0; i < n; i++)
    {
        bird[types[i]]++;
    }
    int first = bird.begin()->first;
    int second = bird.begin()->second;
    for (map<int, int>::iterator it = bird.begin(); it != bird.end(); it++)
    {
        //cout << it->first << " " << it->second << endl;
        if (it->second > second)
        {
            first = it->first;
            second = it->second;
        }
    }
    cout << first;
    // end
    return 0;
}
