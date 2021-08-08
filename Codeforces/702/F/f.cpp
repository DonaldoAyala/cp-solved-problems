#include <bits/stdc++.h>

using namespace std;

int findC (auto m) {
    map<int,int> c;
    for ( auto x : m ) {
        c[x.second]++;
    }
    return c.rbegin() -> second;
}

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for ( auto &x : v ) cin >> x;
    map<int,int> m;
    for ( auto x : v ) m[x]++;
    for ( auto x : m ) {
        printf("{%d, %d}", x.first, x.second);
    }
    cout << "\n";
    int c = findC(m);
    cout << c << endl;
    int ans = 0;
    for ( auto x : m ) {
        ans += min(abs(c - x.second), x.second);
    }
    cout << ans << endl;
}

int main () {
    int t; cin >> t;
    while ( t-- ) solve();
    return 0;
}
