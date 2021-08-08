#include <bits/stdc++.h>
#define lli long long

using namespace std;

void solve() {
    lli n, l, r, s; cin >> n >> l >> r >> s;
    vector<lli> v;
    for ( int i = n ; i >= 1 ; i++ ) {
        if ( s > i ) {
            v.push_back(i);
            s -= i;
        }
    }
}

int main () {
    int t; cin >> t;
    while (t--) solve();
    return 0;
}