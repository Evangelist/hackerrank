#include <iostream>
#include <vector>
using namespace std;
void displayPathtoPrincess(int n, vector <string> grid){
    //your logic here
    // start1
    int mx, my, px, py;
    bool mfound = false;
    bool pfound = false;
    for (int i = 0; i < grid.size(); i++)
        for (int j = 0; j < grid[0].size(); j++)
        {
            if (grid[i][j] == 'm')
            {
                mx = i; my = j; mfound = true;
            }
            else if (grid[i][j] == 'p')
            {
                px = i; py = j; pfound = true;
            }
            if (mfound && pfound) goto OUT;
        }
OUT:
    if (px > mx)
    {
        for (int i = 0; i < px - mx; i++)
            cout << "DOWN" << endl;
    }
    else
    {
        for (int i = 0; i < mx - px; i++)
            cout << "UP" << endl;
    }
    if (py > my)
    {
        for (int i = 0; i < py - my; i++)
            cout << "RIGHT" << endl;
    }
    else
    {
        for (int i = 0; i < my - py; i++)
            cout << "LEFT" << endl;
    }
    // end
}
int main(void) {

    int m;
    vector <string> grid;

    cin >> m;

    for(int i=0; i<m; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }

    displayPathtoPrincess(m,grid);

    return 0;
}
