#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void solve() {
    double n, m, k; cin >> n >> m >> k;
    // m <= n / k -> k
    // m > n / k  -> (n / k) - ((m - n / k) / (k - 1) + (m % k))
    if ( m <= n / k ) {
        cout << m << endl;
    } else {
        int rest = m - n / k;
        //cout << "Cards max " << n / k << endl;
        //cout << "rest " << rest << endl;
        //cout << "cards for all " << rest / (k - 1) << endl;
        //cout << "extra cards " << rest % k << endl;
        cout <<  (n / k) - ceil(rest / (k - 1)) << endl;
    }
}

int main () {
    int t; cin >> t;
    while ( t-- ) {
        solve();
    }
    return 0;
}
