#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long

ull bs (ull tg) {
    ull l = 1, r = 10000, m = l + (r - l) / 2;
    while ( l <= r ) {
        m = l + (r - l) / 2;
        if ( m*m*m == tg ) {
            return m;
        } else if ( m*m*m < tg ) {
            l = m + 1;
        } else if ( m*m*m > tg ) {
            r = m - 1;
        }
    }
    return -1;
}
// 703657519796
void solve() {
    ull x;
    cin >> x;
    for ( ull i = 1 ; i < 10000 && i*i*i < x ; i++ ) {
        long long a = bs(x - i*i*i);
        if ( a > 0 ) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main () {
    int t; cin >> t;
    while ( t-- ) solve();
    return 0;
}
