#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

// start
#include <functional>
// end

using namespace std;

struct Player {
    string name;
    int score;
};

// start
struct
{
    bool operator()(Player p1, Player p2)
    {
        //return true;
        if (p1.score > p2.score) return true;
        if (p1.score == p2.score && p1.name < p2.name) return true;
        return false;
    }
} sort_players;
// end

vector<Player> comparator(vector<Player> players) {
    // start
    vector<Player> players2(players);
    sort(players2.begin(), players2.end(), sort_players);
    return players2;
    // end
}

int main() {

    int n;
    cin >> n;
    vector< Player > players;
    string name;
    int score;
    for(int i = 0; i < n; i++){
        cin >> name >> score;
        Player p1;
        p1.name = name, p1.score = score;
        players.push_back(p1);
    }

    vector<Player > answer = comparator(players);
    for(int i = 0; i < answer.size(); i++) {
        cout << answer[i].name << " " << answer[i].score << endl;
    }
    return 0;
}
