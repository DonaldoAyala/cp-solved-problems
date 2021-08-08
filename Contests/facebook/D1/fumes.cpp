#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(NULL)
#define endl '\n'
#define lli unsigned long long
#define INF LLONG_MAX
using namespace std;

void solve() {
	int n, k; cin >> n >> k;
	vector<lli> dp(n,-1);
	vector<int> C(n);
	for ( int i = 0 ; i < n ; i++ ) {
		cin >> C[i];
	}
	if ( k == n ) {
		cout << 0 << endl;
		return;
	}
	for ( int i = 0 ; i < k+1 ; i++) {
		dp[i] = 0;
	}
	for ( int i = k+1 ; i < n ; i++ ) {
		for ( int j = 1 ; j <= k ; j++ ) {
			if ( C[i-j] != 0 ) {
				if ( dp[i] == -1 ) dp[i] = dp[i-j]+C[i-j];
				else dp[i] = min(dp[i],dp[i-j]+C[i-j]);
			}
		}
	}
	if ( dp[n-1] != -1) cout << -1 << endl;
	else cout << dp[n-1] << endl;
}

int main () {
	FAST_IO;
	int t; cin >> t;
	for ( int i = 1 ; i <= t ; i++ ) {
		cout << "Case #" << i << ": ";
		solve();
	}
	return 0;
}