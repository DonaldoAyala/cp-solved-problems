#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n; cin >> n;
    int ones = 0, twos = 0;
    int x;
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> x;
        if ( x == 1 ) ones++;
        else twos++;
    }
    if ( ones % 2 == 0 && twos % 2 == 0 ) {
        cout << "YES" << endl;
    } else if ( twos % 2 == 1 && ones > 0 && (ones - 2) % 2 == 0 ) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main () {
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
