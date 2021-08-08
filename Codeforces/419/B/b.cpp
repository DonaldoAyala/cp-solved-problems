#include <bits/stdc++.h>
#define lli long long

using namespace std;

int main () {
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> m(2e6 + 2);
    vector<int> v(2e6 + 2);

    int l, r;
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> l >> r;
        m[l] += 1;
        m[r + 1] -= 1;
    }
    int t = 0;
    for ( int i = 0 ; i < m.size() ; i++ ) {
        t += m[i];
        v[i] = t;
    }
    vector<lli> ps(2e6 + 3);
    for ( int i = 0 ; i < m.size() ; i++ ) {
        if ( v[i] >= k )
            ps[i] = 1 + (i > 0 ? ps[i - 1] : 0);
        else 
            ps[i] = (i > 0 ? ps[i - 1] : 0);
    }
    while ( q-- ) {
        cin >> l >> r;
        cout << ps[r] - (l > 0 ? ps[l - 1] : 0) << endl;
    }
    return 0;
}
