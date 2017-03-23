#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> score(n);
    for(int score_i = 0; score_i < n; score_i++){
       cin >> score[score_i];
    }
    // your code goes here
    // start
    int high = score[0];
    int low = score[0];
    int highnumber = 0;
    int lownumber = 0;
    for (int i = 1; i < n; i++)
    {
        if (score[i] > high)
        {
            high = score[i];
            highnumber++;
        }
        if (score[i] < low)
        {
            low = score[i];
            lownumber++;
        }
    }
    cout << highnumber << " " << lownumber << endl;
    // end
    return 0;
}
