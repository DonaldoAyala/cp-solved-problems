#include <bits/stdc++.h>
#define lli long long

using namespace std;

void solve() {
    int a, b; cin >> a >> b;
    string s; cin >> s;
    if ( s.size() % 2 == 1 && s[s.size() / 2] == '?' ) 
        if ( a % 2 == 1 ) s[s.size() / 2] = '0';
        else if ( b % 2 == 1 ) s[s.size() / 2] = '1';
    for ( int l = 0, r = s.size() - 1; l <= r ; l++, r-- ) {
        if ( s[l] != s[r] ) {
            if ( s[l] == '?' || s[r] == '?' ) {
                if ( s[l] == '?' ) s[l] = s[r];
                else s[r] = s[l];
            } else {
                cout << -1 << endl;
                return;
            }
        }
    }
    for ( auto x : s ) 
        if ( x == '0' ) a--;
        else if ( x == '1' ) b--;
    for ( int l = 0, r = s.size() - 1; l <= r ; l++, r-- ) {
        if ( s[l] == '?' ) {
            if ( a >= 2 ) {
                s[l] = s[r] = '0';
                a-=2;
            } else if ( b >= 0 ) {
                s[l] = s[r] = '1';
                b-=2;
            } else {
                cout << -1 << endl;
                return;
            }
        }
    }
    if ( a == 0 & b == 0 ) {
        cout << s << endl;
    } else {
        cout << -1 << endl;
    }
}

int main () {
    int t; cin >> t;
    while ( t-- ) solve();
    return 0;
}