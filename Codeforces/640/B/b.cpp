#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n,k; cin >> n >> k;
	int remainder = n - (k - 1);
	if ( remainder > 0 && remainder & 1 ) {
		cout << "YES" << endl;
		for ( int i = 0 ; i < k - 1 ; i++ ) 
			cout << 1 << " ";
		cout << remainder << endl;
		return;
	} 
	remainder = n - (2 * (k - 1));
	if ( remainder > 0 && remainder % 2 == 0) {
		cout << "YES" << endl;
		for ( int i = 0 ; i < k - 1 ; i++ ) 
			cout << 2 << " ";
		cout << remainder << endl;
		return;
	}
	cout << "NO" << endl;
}

int main () {
	int t; cin >> t;
	while (t--) {
		solve();
	}
}
