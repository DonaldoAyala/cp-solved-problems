#include <bits/stdc++.h>
#define lli long long

using namespace std;

void solve() {
    int n; cin >> n;
    vector<lli> v(n + 2);
    for (auto &x : v) cin >> x;
    
    sort(v.begin(), v.end());
    
    lli sum = 0;
    for ( int i = 0 ; i < n ; i++ ) {
        sum += v[i];
    }
    if ( sum == v[n] || sum == v[n + 1] ) {
        for ( int i = 0 ; i < n ; i++ ) {
            cout << v[i] << " ";
        }
        cout << "\n";
        return;
    }
    sum += v[n];
    for ( int i = 0 ; i < n ; i++ ) {
        if ( sum - v[i] == v[n + 1] ) {
            for ( int j = 0 ; j <= n ; j++ ) {
                if ( i != j )
                    cout << v[j] << " ";
            }
            cout << "\n";
            return;
        }
    }
    
    cout << -1 << endl;
    return;
}

int main () {
    int t; cin >> t;
    while (t--) solve();
    return 0;
}