#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n; cin >> n;
    int msb = 1;
    int i = 1;
    while ( n >> i > 0 ) msb = n & (1 << i++);
    cout << msb - 1 << endl;
}

int main () {
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
