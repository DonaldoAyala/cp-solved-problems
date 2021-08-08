#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    k--;
    if ( n % 2 == 0 ) {
        cout << (k % n) + 1 << endl;
    } else {
        cout << ((k + k / (n / 2)) % n) + 1 << endl;
    }
}

int main () {
    int t; cin >> t;
    while (t--) solve();
}
