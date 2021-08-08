#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(NULL)
#define endl '\n'
using namespace std;


void solve () {
    int n; cin >> n;
    int ans = 0;
    int aux = 0;
    for ( int i = 0 ; i < n ; i++ ) {
        cout << i+1 << " ";
    }
    cout << endl;
}

int main () {
    FAST_IO;
    int t; cin >> t;
    while ( t-- ) {
        solve();
    }
    return 0;
}