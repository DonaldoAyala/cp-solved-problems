#include <bits/stdc++.h>
#define lli long long

using namespace std;

void solve() {
    int n; cin >> n; 
    vector<lli> v(n);
    for(auto& x : v ) cin >> x;
    int a = v[0];
    int o = 0;
    for ( int i = 0 ; i < n ; i++ ) {
        if ( v[i] == a ) o++;
    }
    int res = 0;
    if ( o == 1 ) {
        for ( int i = 0 ; i < n ; i++ ) {
            if ( v[i] == a ) res = i + 1;
        }
    } else {
        for ( int i = 0 ; i < n ; i++ ) {
            if ( v[i] != a ) res = i + 1;
        }
    }
    cout << res << endl;
}

int main () {
    int t; cin >> t;
    while (t--) solve();
    return 0;
}