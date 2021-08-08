#include <bits/stdc++.h>

#define lli long long

using namespace std;

lli bs (lli n, lli k) {
    lli l = 1, r = 2 * 10e9, m = l + (r - l) / 2;
    lli res;
    while ( l <= r ) {
        m = l + (r - l) / 2;
        if ( m % n == 0 ) m++;
        res = m - (m/n);
        //cout << "l: " << l << " r: " << r << " m: " << m << " res: " << res << endl;
        if ( res == k ) {
            return m;
        } else if ( res < k ) {
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    return m;
}

void solve() {
	int n, k; cin >> n >> k;
	cout << bs(n,k) << endl;
}

int main () {
	int t; cin >> t;
	while (t--) {
		solve();
	}
}
