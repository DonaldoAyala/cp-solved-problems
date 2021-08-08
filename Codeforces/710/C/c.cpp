#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s, t; cin >> s >> t;
    int su[s.size() + 1][t.size() + 1];
    int lcs = 0;
    for ( int i = 0 ; i <= s.size() ; i++ ) {
        for ( int j = 0 ; j <= t.size() ; j++ ) {
            if ( i == 0 || j == 0 ) {
                su[i][j] = 0;
                continue;
            }
            if ( s[i - 1] == t[j - 1] ) {
                su[i][j] = su[i - 1][j - 1] + 1;
                lcs = max (lcs, su[i][j]);
            } else {
                su[i][j] = 0;
            }
        }
    }
    cout << s.size() + t.size() - lcs * 2 << endl;
}

int main () {
    int t; cin >> t;
    while ( t-- ) solve();
    return 0;
}
