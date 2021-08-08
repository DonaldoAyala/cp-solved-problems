#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n; cin >> n;
    vector<float> v(n);
    for (auto &x : v) cin >> x;
    int ans = 0;
    int patch = 0;
    for ( int i = 0 ; i < n - 1 ; i++ ) {
        if ( max(v[i], v[i + 1]) / min(v[i], v[i + 1]) > 2 ) {
            int ma = max(v[i], v[i + 1]);
            int mi = min(v[i], v[i + 1]);
            patch++;
            while (mi < ma) {
                mi <<= 1;
                ans++;
            };
        }
    }
    cout << ans - patch << endl;
}

int main () {
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
