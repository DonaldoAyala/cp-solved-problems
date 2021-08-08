#include <bits/stdc++.h>
using namespace std;


void solve() {
	int n; cin >> n;
	vector<int> nums(100 + 2, 0);
	int x;
	int f = -1, s = -1;
	for ( int i = 0 ; i < n ; i++ ) {
		cin >> x;
		nums[x]++;
	}
	for ( int i = 0 ; i < 102 ; i++ ) {
		if ( f == -1 && nums[i] == 0 ) {
			f = i;
		}
		if ( s == -1 && nums[i] < 2 ) {
			s = i;
		}
	}
	if (f == -1) f = 0;
	if (s == -1) s = 0;
	cout << f + s << endl;
}

int main () {
	int t; cin >> t;
	while (t--) {
		solve();
	}
}
