#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, u,r,b,l; cin >> n >> u >> r >> b >> l;
    
    if ( u && l ) u--, l--;
    if ( u && r ) u--, r--;
    if ( r && b ) r--, b--;
    if ( b && l ) b--, l--;

    n -= 2;
    // 2 , 2 2 2 1
    if ( u <= n ) u = 0;
    if ( r <= n ) r = 0;
    if ( b <= n ) b = 0;
    if ( l <= n ) l = 0;
    bool pos = u || r || b || l;
    if ( !pos ) cout << "YES\n";
    else cout << "NO\n";
}

int main () {
    int t; cin >> t;
    while (t--) solve();
    return 0;
}