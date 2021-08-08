#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> s(n);
    for ( auto &x : s ) cin >> x;
    sort( s.begin(), s.end() );
    int m = INT_MAX;
    for ( int i =  0 ; i < n - 1 ; i++ ) {
        m = min( m, abs( s[i] - s[i + 1] ) );
    }
    cout << m << endl;
}

int main () {
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
