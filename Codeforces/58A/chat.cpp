#include <bits/stdc++.h>
using namespace std;
int main () {
    string w = "hello";
    int index = 0;
    string s; cin >> s;
    for ( int i = 0 ; i < s.size() ; i++ ) {
        if ( index >= 5 ) break;
        if ( s[i] == w[index] ) index++;
    }
    if ( index == 5 ) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
