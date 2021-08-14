#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n; cin >> n;
    if (n % 2 == 0 && (n - 2)%2 == 0 && n != 2) cout << "YES\n";
    else cout << "NO\n";
}

int main () {
    int t; 
    //cin >> t;
    t = 1;
    while (t--) solve();
    return 0;
}