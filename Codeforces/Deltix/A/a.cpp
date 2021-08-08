#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    string s; cin >> s;
    int fo = -1, lo = -1;
    for ( int i = 0 ; i < n ; i++ ) {
        if (fo == -1 && s[i] == '1') fo = i;
        if (s[i] == '1') lo = i;
    }
    if (lo == -1 && fo == -1) {
        cout << s << endl;
        return;
    }
    for ( int i=fo, am=m; i >= 0 && am >= 0; i--, am-- ) {
        s[i] = '1';
    }
    for ( int i=lo, am=0; i < n && am < m; i++, am++ ) {
        s[i] = '1';
    }
    for ( int i = fo; i <= lo ; i++ ) {
        if (s[i] == '0') {
            int l = i, r = i;
            for (int j = l; j <= lo ; j++) {
                if (s[j] == '1') break;
                r = j;
            }
            int am = m;
            i = r;
            while(l < r && am > 0) {
                s[l++] = s[r--] = '1';
                am--;
            }
        }
    }
    cout << s << endl;
}

int main () {
    int t; cin >> t;
    while(t--)solve();
    return 0;
}
