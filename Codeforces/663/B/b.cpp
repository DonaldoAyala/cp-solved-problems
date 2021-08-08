#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(NULL)
#define endl '\n'
using namespace std;

void solve () {
	int n, m; cin >> n >> m;
	//cout << n << " " << m << endl;
	vector<string> grid(n);
	int ans = 0;
	for ( int i = 0 ; i < n ; i++ ) {
		cin >> grid[i];
	}
	for ( int i = 0 ; i < n ; i++ ) {
		if ( grid[i][m-1] == 'R') ans++;
	}
	for ( int i = 0 ; i < m ; i++ ) {
		if ( grid[n-1][i] == 'D') ans++;
	}
	cout << ans << endl;
}

int main () {
	FAST_IO;
    int t ; cin >> t;
    while ( t-- ) {
    	solve();
    }
    return 0;
}