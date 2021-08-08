#include <bits/stdc++.h>

using namespace std;

int main () {
    int n,k; cin >> n >> k;
    vector<pair<int,int>> v;
    int a,b;
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> a >> b;
        v.push_back( {a,b} );
    }
    double ans = 0;
    for ( int i = 1 ; i < n ; i++ ) {
        ans += sqrt( pow((v[i].first - v[i - 1].first), 2) + pow((v[i].second - v[i - 1].second), 2) );
    }
    printf( "%0.10f\n", ((ans) / 50) * k );
    return 0;
}

