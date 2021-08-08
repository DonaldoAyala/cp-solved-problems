#include <bits/stdc++.h>

using namespace std;

vector<int> dp;

void solve() {
    int n; cin >> n;
    dp = vector<int>(n, -1);
    vector<int> v(n);
    for ( auto &x : v ) cin >> x;
    for ( int i = n - 1 ; i >= 0 ; i-- ) {
        int local = v[i];
        int j = i;
        while ( j + v[j] < n ) {
            j += v[j];
            local += dp[j];
            if ( dp[j] != -1 ) break;
        }
        dp[i] = max(dp[i], local);
    }
    int ans = dp[0];
    for ( int i = 1 ; i < n ; i++ ) {
        ans = max(ans, dp[i]);
    }
    cout << ans << endl;
}

int main () {
    int t; cin >> t;
    while ( t-- ) solve();
    return 0;
}
