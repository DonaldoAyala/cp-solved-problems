#include <bits/stdc++.h>
using namespace std;

vector<string> grid;
vector<vector<bool>> vistd;
int n,m,k;

vector<vector<int>> mvs = {{1,0} , {0,1} , {-1,0} , {0,-1}};

void dp(int fil, int col) {
    if ( k <= 0 || fil < 0 || fil >= n || col < 0 || col >= m || vistd[fil][col] || grid[fil][col] == '#' || grid[fil][col] == 'X')return;
    vistd[fil][col] = true;
    for ( auto x : mvs ) 
        dp (fil + x[0] , col + x[1]);
    if ( k > 0 ){
        grid[fil][col] = 'X';
        k--;
    }
}

int main () {
    cin >> n >> m >> k;
    grid = vector<string>(n);
    vistd = vector<vector<bool>>(n,vector<bool>(m,false));
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> grid[i];
    }
    for ( int i = 0 ; i < n ; i++ ) {
        for ( int j = 0 ; j < m ; j++ ) {
            if ( grid[i][j] == '.') dp(i,j);
        }
    }
    for ( int i = 0 ; i < n ; i++ ) {
        cout <<grid[i]<<'\n';
    }
    return 0;
}
