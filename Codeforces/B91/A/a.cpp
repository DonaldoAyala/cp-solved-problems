#include <bits/stdc++.h>

using namespace std;

map<int,int> fact (int n) {
    map<int,int> m;
    for ( int i = 2 ; i * i <= n ; i++ ) {
        if ( n % i ) {
            while ( n % i == 0 ) {
                m[i]++;
                n /= i;
            }
        }
    }
    if ( n > 1 ) {
        m[n] = 1;
    }
    return m;
}

int main () {
    int n; cin >> n;
    map<int,int> m = fact(n);
    bool res = true;
    for ( auto x : m ) {
        res = ( x.first == 7 || (x.first == 2 && x.second % 2 == 0 ));
    }
    if ( res ) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
