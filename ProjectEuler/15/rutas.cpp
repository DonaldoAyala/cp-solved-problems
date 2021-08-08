#include <bits/stdc++.h>
#define n 21
#define lli long long
using namespace std;

vector<vector<lli>> grid(n,vector<lli>(n,-1));

lli routes(int fil, int col) {
	if(fil > n-1 || col > n-1) return 0;
	if(fil == n-1 && col == n-1) grid[fil][col] = 1;
	if(grid[fil][col] != -1) return grid[fil][col];
	return grid[fil][col] = routes(fil + 1, col) + routes(fil, col + 1);
}

int main() {
	cout<<routes(0,0)<<'\n';
	return 0;
}