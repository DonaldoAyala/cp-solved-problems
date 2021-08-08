#include <bits/stdc++.h>
#define lli long long

using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for ( auto &x : v ) cin >> x;
    for ( int i = 0 ; i < n ; i++ ) {
        for ( int j = 0 ; j < n ; j++ ) {
            if ( i == j ) continue;
            int root = sqrt(v[i] * v[j]);
            if ( root * root != v[i]*v[j] ) {
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";
}

int main () {
    int t; cin >> t;
    while (t--) solve();
    return 0;
}