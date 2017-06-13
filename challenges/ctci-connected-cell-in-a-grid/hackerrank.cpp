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

// start
void print_grid(vector<vector<int>>& grid)
{
    int n = grid.size();
    int m = grid[0].size();
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << grid[i][j];
        }
        cout << endl;
    }
}

void check_grid(vector<vector<int>>& grid, int i, int j, int& count)
{
    int n = grid.size();
    int m = grid[0].size();
    if (i < 0 || i >= n) return;
    if (j < 0 || j >= m) return;
    if (grid[i][j] == 1)
    {
        count++;
        grid[i][j] = 2;
        check_grid(grid, i - 1, j - 1, count);
        check_grid(grid, i - 1, j, count);
        check_grid(grid, i - 1, j + 1, count);
        check_grid(grid, i, j - 1, count);
        check_grid(grid, i, j + 1, count);
        check_grid(grid, i + 1, j - 1, count);
        check_grid(grid, i + 1, j, count);
        check_grid(grid, i + 1, j + 1, count);
    }
}
// end

int get_biggest_region(vector< vector<int> > grid) {
    // start
    int n = grid.size();
    int m = grid[0].size();
    int cur_count = 0;
    int max_count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cur_count = 0;
            check_grid(grid, i, j, cur_count);
            //cout << cur_count << endl;
            if (cur_count > max_count) max_count = cur_count;
        }
    }
    //print_grid(grid);
    return max_count;
    // end
}

int main(){
    //freopen("input/input01.txt", "r", stdin);
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector< vector<int> > grid(n,vector<int>(m));
    for(int grid_i = 0;grid_i < n;grid_i++){
       for(int grid_j = 0;grid_j < m;grid_j++){
          cin >> grid[grid_i][grid_j];
       }
    }
    cout << get_biggest_region(grid) << endl;
    return 0;
}
