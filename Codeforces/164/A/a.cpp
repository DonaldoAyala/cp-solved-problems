#include <bits/stdc++.h>

using namespace std;

int main () {
    int n; cin >> n;
    vector<pair<int,int>> v;
    int a,b;
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> a >> b;
        v.push_back( {a,b} );
    }
    int ans = 0;
    for ( int i = 0 ; i < n ; i++ ) {
        for ( int j = 0 ; j < n ; j++ ) {
            if ( i == j ) continue;
            if ( v[i].first == v[j].second ) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
