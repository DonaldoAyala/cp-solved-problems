#include <bits/stdc++.h>
using namespace std;

void solve () {
    int n; cin >> n;
    vector<int> v(n);
    for ( auto &x : v ) cin >> x;
    int bpeven = 0, bpodd = 0;
    for ( int i = 0 ; i < n ; i++ ) {
        if ( i % 2 == 0 && v[i] % 2 != 0 ) bpeven++;
        if ( i % 2 != 0 && v[i] % 2 == 0 ) bpodd++;
    }
    if ( bpeven == bpodd ) cout << bpeven << endl;
    else cout << -1 << endl;
}

int main () {
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
