#include <bits/stdc++.h>

using namespace std;

vector<int> v;
unordered_map<int, int> um;

void dfs (int l, int r, int lev) {
    if ( r < l ) return;
    int m = l;
    for ( int i = l ; i <= r ; i++ ) {
        if ( v[m] < v[i] ) {
            m = i;
        }
    }
    um[v[m]] = lev;
    dfs(l, m - 1, lev + 1);
    dfs(m + 1, r, lev + 1);
}

void solve() {
    int n; cin >> n;
    v = vector<int>(n);
    for ( auto &x : v ) cin >> x;
    dfs(0, v.size() - 1, 0);
    for ( int i = 0 ; i < n ; i++ ) {
        cout << um[v[i]] << " ";
    }
    cout << '\n';
}

int main () {
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
