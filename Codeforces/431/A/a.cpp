#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

vector<int> mem(105, -1);

int dp (int n, int d, int k) {
	if ( mem[n] != -1 ) return mem[n];
	if ( n < 0 ) return 0;
	if ( n == 0 ) {
		if ( d <= 0 ) return 1;
		return 0;
	}
	int total = 0;
	for ( int i = 1 ; i <= k ; i++ ) {
		cout << "i" << i << " " << d <<endl;
		if ( i <= n ) {
			if ( d && i >= d )
				total += dp(n - i, 0, k);
			else
				total += dp(n - i, d, k);
		}
		//cout << "total: " << total << endl;
	}
	return mem[n] = total;
}

int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int sum, k, d;
	cin >> sum >> k >> d;
	cout << dp(sum, d, k) << endl;
	return 0;
}