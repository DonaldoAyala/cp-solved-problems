#include <bits/stdc++.h>
using namespace std;
 int main () {
    string s; cin >> s;
    for ( int i = 0 ; i < s.size() ; i++ ) {
       if ( s[i] == 'A' || s[i] == 'A'+32 || s[i] == 'E' || s[i] == 'E'+32 || s[i] == 'I' || s[i] == 'I'+32 || s[i] == 'O' || s[i] == 'O'+32 || s[i] == 'U' || s[i] == 'U'+32 || s[i] == 'Y' || s[i] == 'Y'+32 ) continue;
       else cout << '.' << (char)(s[i] < 97 ? s[i] + 32 : s[i] );
    }
    cout << '\n';
    return 0;
 }
