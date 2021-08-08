#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(NULL)
#define endl '\n'
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> v[i];
    }
    int i = 0;
    int bgst;
    long long max_sum = 0;
    while ( i < n ) {
        bgst = 0;
        while ( v[i] > 0 && i < n) {
            bgst = max (bgst,v[i]);
            i++;
        }
        max_sum += bgst;
        bgst = 0;
        if ( i < n ) bgst = v[i];
        while ( v[i] < 0 && i < n ) {
            bgst = max(bgst,v[i]);
            i++;
        }
        max_sum += bgst;
    }
    cout << max_sum << endl;
}

int main () {
    FAST_IO;
    int t; cin >> t;
    while ( t-- ) {
        solve();
    }
    return 0;
}
