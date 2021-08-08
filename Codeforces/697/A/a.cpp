#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long n; cin >> n;
    if ( n & 1 ) { cout << "YES\n" ; return; }
    while ( n > 1 ) {
        n /= 2;
        if ( n & 1 && n > 1 ) { cout << "YES\n" ; return; }
    }
    cout << "NO\n";
}


int main () {
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
