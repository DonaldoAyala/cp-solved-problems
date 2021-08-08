#include <bits/stdc++.h>
using namespace std;

bool possible (string a) {
    int p = 0;
    for ( int i  = 0 ; i < a.size() ; i++ ) {
        if ( a[i] == '(' ) {
            p++;
        } else {
            if ( p > 0 ) {
                p--;
            } else {
                return false;
            }
        }
    }
    return p == 0;
}

string replace (string s, char a, char b, char c) {
    for ( int i = 0 ; i < s.size() ; i++ ) {
        if ( s[i] == 'A' ) s[i] = a;
        if ( s[i] == 'B' ) s[i] = b;
        if ( s[i] == 'C' ) s[i] = c;
    }
    return s;
}

void solve() {
    string s; cin >> s;
    bool pos = false;
    pos = pos || possible(replace(s, '(', '(', ')'));
    pos = pos || possible(replace(s, '(', ')', '('));
    pos = pos || possible(replace(s, ')', '(', '('));
    pos = pos || possible(replace(s, '(', ')', ')'));
    pos = pos || possible(replace(s, ')', '(', ')'));
    pos = pos || possible(replace(s, ')', ')', '('));
    if ( pos ) cout << "YES\n";
    else cout << "NO\n";
}

int main () {
    int t; cin >> t;
    while ( t-- ) solve();
    return 0;
}