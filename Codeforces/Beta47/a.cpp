#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    if ( n % 2 == 0 || m % 2 == 0 ) {
        cout << n * m / 2 << endl;
    } else {
        n--;
        cout << n * m / 2 + m / 2 << endl;
    }
}

int main () {
    int t = 1;
    while ( t-- ) {
        solve();
    }
}
