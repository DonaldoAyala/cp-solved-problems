#include <bits/stdc++.h>

using namespace std;

static const string ans = "abacaba";

void printAns(string &s, const int index) {
    for ( int i = index ; i < ans.size() ; i++ ) {
        s[i] = ans[i];
    }
    for ( int i = 0 ; i < s.size() ; i++ ) {
        if ( s[i] == '?' ) s[i] = 'a';
    }
    cout << s << endl;
}

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    for ( int i = 0 ; i < s.size() ; i++ ) {
        for ( int j = 0 ; j < ans.size() ; j++ ) {
            if ( s[i + j] != ans[j] && s[i + j] != '?' ) break;
            if ( j == 6 ) {
                cout << "YES\n";
                printAns(s, i);
                return;
            }
        }
    }
    cout << "NO\n";
}

int main () {
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
