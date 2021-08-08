#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(NULL)
#define endl '\n'
using namespace std;


void solve () {
    int a, k; cin >> a >> k;
    if ( k > a ) {
        cout << abs(a-k) << endl;
    } else {
        if ( a%2 == 0 && k%2 == 1 ) {
            cout << 1 << endl;
        } else if ( a%2 == 1 && k%2 == 0 ) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }
}

int main () {
    FAST_IO;
    int t; cin >> t;
    while ( t-- ) {
        solve();
    }
    return 0;
}