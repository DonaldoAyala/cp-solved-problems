#include <bits/stdc++.h>

using namespace std;

vector<int> getDivisors ( int n ) {
    vector<int> div;
    for ( int i = 1 ; i*i <= n ; i++ ) {
        if ( n % i == 0 ) {
            div.push_back(i);
            if ( i != n / i )
                div.push_back(n / i);
        }
    }
    return div;
}

bool isLucky ( int n ) {
    while ( n ) {
        int r = n % 10;
        n /= 10;
        if ( r != 7 && r != 4 ) return false;
    }
    return true;
}


bool is ( int n ) {
    vector<int> d = getDivisors(n);
    //for ( auto x : d ) if ( isLucky(x) ) printf("%d is lucky\n", x); else printf("%d not lucky\n", x);
    for ( auto x : d ) if ( isLucky(x) ) return true;
    return false;
}

int main () {
    int n; cin >> n;
    if ( is(n) ) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
