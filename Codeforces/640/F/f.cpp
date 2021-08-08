#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n0, n1, n2; cin >> n0 >> n1 >> n2;
    int n1x = n1;
    int ts = n0 + n1 + n2;
    string s = "";
    if ( n0 || n1 ) {
        if ( n1 % 2 == 0 && n1 > 0 ) {
            s += "10";
            n1--;
        } else {
            s += "0";
        }
    }
    while ( n0-- > 0  ) s += "0";
    char aux = '1';
    while ( n1-- > 0 ) {
        s.push_back(aux);
        aux = (aux == '1' ? '0' : '1');
    }
    if ( n1x == 0 && n2 > 0 ) n2++;
    while ( n2-- > 0 ) s += "1";
    cout << s << endl;
}

int main () {
    int t; cin >> t;
    while ( t-- ) solve();
    return 0;
}
