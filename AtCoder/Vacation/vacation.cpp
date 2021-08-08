#include <bits/stdc++.h>
using namespace std;
int main () {
	int n; cin >> n;
	vector<vector<int>> v(n,vector<int>(3));
	vector<vector<int>> dp(n,vector<int>(3));
	for ( int i = 0 ; i<n ; i++) {
		cin >> v[i][0] >> v[i][1] >> v[i][2];
	}
	for ( int i = 0 ; i<n ; i++) {
		for ( int j = 0 ; j<3; j++) {
			if ( i==0 ) { // En la primera iteracion no hay restricciones
				dp[i][j] = v[i][j];
			} else {
				for ( int k = 0 ; k < 3 ; k++) {
					if ( j == k) continue;
					// Se exploran las tres posiciones anteriores
					// execpto la elegida anteriormente que es j
					dp[i][j] = max (dp[i][j],dp[i-1][k] + v[i][j]);
				}
			}
		}
	}
	int ans = dp[n-1][0];
	ans = max (dp[n-1][1],ans);
	ans = max (dp[n-1][2],ans);
	cout << ans << endl;
	return 0;
}