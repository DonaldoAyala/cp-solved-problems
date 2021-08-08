#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(NULL)
#define endl '\n'
using namespace std;

void solve () {
    int n,m,d; cin >> n >> m >> d;
    vector<int> v(n*m);
    for ( int i = 0 ; i < n*m ; i++ ) {
        cin >> v[i];
    }
    bool posible = true;
    sort(v.begin(),v.end());
    int index = (n*m) /2;
    long long no_mov = 0;
    for ( int i = 0 ; i < n*m && posible ; i++ ) {
        if ( i > 0 && abs(v[i] - v[i-1]) % d ) {
            posible = false;
        }
        no_mov += abs(v[index] - v[i]) / d;
    }
    if ( posible ) cout << no_mov << endl;
    else cout << -1 << endl;
}

int main () {
    FAST_IO;
    //int t; cin >> t;
    int t = 1;
    while ( t-- ) {
        solve();
    }
    return 0;
}
