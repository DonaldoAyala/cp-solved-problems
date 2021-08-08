#include <bits/stdc++.h>

using namespace std;

void solve() {
    int w,h,n; cin >> w >> h >> n;
    long long p = 1;
    while ( ((w > 1 && w % 2 == 0 ) || (h > 1 && h % 2 == 0)) && p < n ) {
        if ( w % 2 == 0 ) {
            w /= 2;
        } else if ( h % 2 == 0 ) {
            h /= 2;
        }
        p *= 2;
    }
    if ( p >= n ) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main () {
    int t; cin >> t;
    while ( t-- ) solve();
    return 0;
}
