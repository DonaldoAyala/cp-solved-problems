#include <bits/stdc++.h>

#define lli long long

using namespace std;

int main () {
    int n; cin >> n;
    vector<lli> v(n);
    for ( auto &x : v ) cin >> x;
    vector<lli> ps(n + 1);
    for ( int i = 0 ; i < n ; i++ ) {
        ps[i] = v[i] + (i > 0 ? ps[i - 1] : 0);
    }
    int q; cin >> q;
    int l, r; 
    while ( q-- ) {
        cin >> l >> r;
        cout << ps[r] - (l > 0 ? ps[l - 1] : 0) << endl;
    }
    return 0;
}
