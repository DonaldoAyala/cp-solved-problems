#include <bits/stdc++.h>
#define lli long long

using namespace std;

void solve() {
    int n; cin >> n;
    vector<pair<int,int>> p;
    vector<string> v(n);
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> v[i];
    }
    for ( int i = 0 ; i < n ; i++ ) {
        for ( int j = 0 ; j < n ; j++ ) {
            if ( v[i][j] == '*' ) {
                p.push_back({i,j});
            }
        }
    }
    if ( p[0].first == p[1].first ) {
        p.push_back({(p[0].first == 0 ? 1 : 0), p[1].second});
        p.push_back({(p[0].first == 0 ? 1 : 0), p[0].second});
    } else if ( p[0].second == p[1].second ) {
        p.push_back({p[0].first , (p[1].second == 0 ? 1 : 0)});
        p.push_back({p[1].first , (p[1].second == 0 ? 1 : 0)});
    } else {
        p.push_back({p[0].first , p[1].second});
        p.push_back({p[1].first , p[0].second});
    }
    for ( auto x : p ) {
        v[x.first][x.second] = '*';
    }
    for ( int i = 0 ; i < n ; i++ ) {
        cout << v[i] << endl;
    }
}

int main () {
    int t; cin >> t;
    while (t--) solve();
    return 0;
}