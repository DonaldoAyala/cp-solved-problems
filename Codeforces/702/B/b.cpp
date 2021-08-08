#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n ; cin >> n;
    vector<int> v(n);
    vector<int> r(3,0);
    int x;
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> x;
        r[x % 3]++;
    }
    int a = n / 3;
    int ans = 0;
    do {
        while ( r[0] > a ) r[0]--, r[1]++, ans++;
        while ( r[1] > a ) r[1]--, r[2]++, ans++;
        while ( r[2] > a ) r[2]--, r[0]++, ans++;
    }while (r[0] != a || r[1] != a || r[2] != a);
    cout << ans << endl;
}

int main () {
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
