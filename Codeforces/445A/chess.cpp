#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(NULL)
#define endl '\n'
using namespace std;
vector<string> grid;

int n, m;
vector<vector<int>> mvs = {{1,0},{0,1},{-1,0},{0,-1}};

void dfs (int row, int col, char color) {
    if ( row < 0 || row >= n || col < 0 ||
    col >= m || grid[row][col] == 'W' ||
    grid[row][col] == 'B' || grid[row][col] == '-' ) 
        return;
    grid[row][col] = color;
    if ( color == 'B' ) color = 'W';
    else color = 'B';
    for ( auto mv : mvs ) {
        dfs(row + mv[0], col + mv[1], color);
    }
}

int main () {
    cin >> n >> m;
    grid = vector<string>(n);
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> grid[i];
    }
    for ( int i = 0 ; i < n ; i++ ) {
        for ( int j = 0 ; j < m ; j++ ) {
            if ( grid[i][j] == '.' )
                dfs(i,j,'B');
        }
    }
    for ( int i = 0 ; i < n ; i++ ) {
        cout << grid[i] << endl;
    }
    return 0;
}
