#include <bits/stdc++.h>

using namespace std;

void bfs (vector<string> &g) {

}

int main () {
	int n,m,t; cin >> n >> m >> t;
	vector<string> v(n);
	for ( int i = 0 ; i < n ; i++ ) {
		cin >> v[i];
	}
	bfs(v);
	int col, row, st;
	while ( t-- ) {
		cin >> row >> col >> st;

	}
	return 0;
}