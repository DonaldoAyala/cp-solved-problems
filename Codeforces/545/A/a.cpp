#include <bits/stdc++.h>

using namespace std;

int main () {
    int n; cin >> n;
    vector<int> v(n);
    for ( int i = 0 ; i < n ; i++ ) cin >> v[i];
    int i = 0;
    int ct = v[0];
    int cs = 0;
    vector<int> seg;
    for ( int i = 0 ; i < n ; i++ ) {
        if ( v[i] == ct ) cs++;
        else {
            ct = v[i];
            seg.push_back(cs);
            cs = 1;
        }
    }
    seg.push_back(cs);
    int ans = 0;
    for ( int i = 0 ; i < seg.size() - 1; i++ ) {
        ans = max(ans, min(seg[i], seg[i + 1]));
    }
    cout << ans * 2 << endl;
}
