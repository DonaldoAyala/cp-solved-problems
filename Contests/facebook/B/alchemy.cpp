#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(NULL)
#define endl '\n'
#define lli long long
using namespace std;

void solve() {
	lli n; cin >> n;
	string s; cin >> s;
	lli A = 0, B = 0;
	for ( lli i = 0 ; i < n ; i++ ) {
		if ( s[i] ==  'A' ) A++;
		else B++;
		if ( (A >= 2 && B >= 1) || ( A >= 1 && B >= 2) ) {
			A--;
			B--;
		}
	}
	if ( (A == 1 && !B) || (!A && B == 1)  ) cout << "Y\n";
	else cout << "N\n";
}

int main () {
	FAST_IO;
	int t; cin >> t;
	for ( int i = 1 ; i <= t ; i++ ) {
		cout << "Case #" << i << ":";
		solve();
	}
	return 0;
}