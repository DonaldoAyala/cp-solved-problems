#include <bits/stdc++.h>

using namespace std;

void solve () {
	int n; cin >> n;
	if ( n == 1 ) {
		cout << 0 << endl;
	} else if ( n == 2 ) {
		cout << 1 << endl;
	} else if ( n == 3 ) {
		cout << 2 << endl;
	} else if ( n & 1 ) {
		cout << 3 << endl;
	} else {
		cout << 2 << endl;
	}
}

int main () {
	int t; cin >> t;
	while ( t-- ) {
		solve();
	}
	return 0;
}