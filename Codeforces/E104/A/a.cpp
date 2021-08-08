#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for ( auto & x : v ) cin >> x;
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    int ans = 0;
    for ( int i = 0 ; i < n - 1 ; i++ ) {
        if ( v[i] > v[n - 1] ) ans++;
    }
    cout << ans << endl;
}

int main () {
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
