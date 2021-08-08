#include <bits/stdc++.h>

using namespace std;

vector<bool> sums;

void solve() {
    sums = vector<bool>(8001, false);
    int n; cin >> n;
    vector<int> v(n);
    int sum = 0;
    for ( auto &x : v ) cin >> x;
    for ( int i = 0 ; i < n - 1 ; i++ ) {
        sum = v[i];
        for ( int j = i + 1 ; j < n ; j++ ) {
            sum += v[j];
            if ( sum <= 8000 ) sums[sum] = true;
        }
    }
    int ans = 0;
    for ( int i = 0 ; i < n ; i++ ) {
        if ( sums[v[i]] ) ans++;
    }
    cout << ans << endl;
}

int main () {
    int t; cin >> t;
    while ( t-- ) solve();
    return 0;
}
