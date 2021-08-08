#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(NULL)
#define endl '\n'
using namespace std;

void solve () {
    int n,m; cin>>n>>m;
    int x;
    set<int> s;
    for ( int i = 0 ; i < n ; i++) {
        cin >> x;
        s.insert(x);
    }
    bool found = false;
    int nfound = -1;
    for ( int i = 0 ; i < m ; i++) {
        cin >> x;
        if (s.count(x) && !found) {
            found = true;
            nfound = x;
        }
    }
    if ( !found ) cout << "NO" << endl;
    else {
        cout << "YES" << endl;
        cout << 1 << " " << nfound << endl;
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