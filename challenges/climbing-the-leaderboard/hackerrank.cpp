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

//#define INPUT_FROM_FILE

using namespace std;


int main(){
#ifdef INPUT_FROM_FILE
    freopen("input06.txt", "r", stdin);
#endif
    int n;
    cin >> n;
    vector<int> scores(n);
    for(int scores_i = 0;scores_i < n;scores_i++){
       cin >> scores[scores_i];
    }
    int m;
    cin >> m;
    vector<int> alice(m);
    for(int alice_i = 0;alice_i < m;alice_i++){
       cin >> alice[alice_i];
    }
    // your code goes here
    // start
    scores.push_back(INT_MAX);
    set<int> set_score(scores.begin(), scores.end());
    vector<int> score(set_score.begin(), set_score.end());
    int alice_index = 0;
    int score_index = 0;
    while (1)
    {
        //cout << alice_index << ' ' << score_index << endl;
        if (alice[alice_index] < score[score_index])
        {
            cout << score.size() - score_index << endl;
            alice_index++;
        }
        else
        {
            score_index++;
        }
        if (alice_index >= alice.size())
        {
            break;
        }
    }
    // end
    return 0;
}
