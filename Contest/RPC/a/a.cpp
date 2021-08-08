#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
vector<long long> dp;
// digit and its cost
vector<pair<int,int>> m = {{1,2},{7,3},{4,4}};

long long rec (long long n) {
	if ( n == 0 ) return 0;
	if ( n < 0 ) return - (1 << 29);
	if ( dp[n] != -1 ) return dp[n];
	long long ma = - (1 << 30);
	for ( auto x : m ) {
			ma = max (ma, rec(n - x.second) + x.first);
	}
	return dp[n] = ma;
}

int main () {
	int n ; cin >> n;
	dp = vector<long long> (1000000 + 1,-1);
	dp[0] = 0;dp[1] = 0;dp[2] = 1;dp[3] = 7;dp[4] = 4;
	for ( int i = 5 ; i < n+1 ; i++ ) {
		for ( auto x : m ) {
			if ( i - x.second >= 0 ) {
					dp[i] = max (dp[i], dp[i-x.second] + x.first);
			}
		}
	}
	cout << dp[n] << endl;
	return 0;
}