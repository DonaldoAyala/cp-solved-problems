#include <bits/stdc++.h>

using namespace std;

unordered_map<int, bool> dp;

void precom () {
    dp[0] = true;
    for ( int i = 0 ; i <= 1000000 ; i++ ) {        
        if ( dp[i] ) {
            dp[i + 2020] = true;
            dp[i + 2021] = true;
        }
    }
}

void solve() {
    int n; cin >> n;
    if ( dp[n] ) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main () {
    precom();
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
