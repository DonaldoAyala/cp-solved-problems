#include <bits/stdc++.h>

using namespace std;

int main () {
    string s; cin >> s;
    char c = 'a' - 1;
    int ocurr = 0;
    for ( int i = 0 ; i < s.size() ; i++ ) {
        if ( s[i] > c )  {
            c = s[i];
            ocurr = 1;
        } else if ( s[i] == c ) {
            ocurr++;
        }
    }
    for ( int i = 0 ; i < ocurr ; i++ ) {
        cout << c;
    }
    cout << endl;
    return 0;
}
