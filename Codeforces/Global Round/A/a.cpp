#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(NULL)
#define endl '\n'
using namespace std;


void solve () {
    int n; cin >> n;
    vector<int> v(n);
    int no_eq = 0;
    for ( int i = 0 ; i < n ; i++ ) {
    	cin >> v[i];
    	if ( i && v[i] == v[i-1] ) no_eq++;
    }
    if ( no_eq == n-1 ) cout << n << endl;
    else cout << 1 << endl;
}

int main () {
    FAST_IO;
    int t; cin >> t;
    while ( t-- ) {
        solve();
    }
    return 0;
}