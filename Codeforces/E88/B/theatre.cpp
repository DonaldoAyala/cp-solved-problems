#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n,m,x,y; cin>>n>>m>>x>>y;
    vector<string> the(n);
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> the[i];
    }
    int pair = 0, dot = 0;
    for ( int i = 0 ; i < n ; i++ ) {
        for ( int j = 0 ; j < m ; j++ ) {
            if ( the[i][j] == '.' ) {
                if ( j < m - 1 && the[i][j + 1] == '.') {
                    pair++;
                    j++;
                } else {
                    dot++;
                }
            }
        }
    }
    // cout << dot << " " << pair << endl;
    cout << min ( dot * x + pair * y , ((pair * 2) + dot) * x ) << endl;
}

int main () {
    int t; cin >> t;
    while ( t-- ) {
        solve();
    }
    return 0;
}


