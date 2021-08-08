#include <bits/stdc++.h>
#define lli long long int

using namespace std;

lli fact ( const lli &n ) {
    for ( lli i = 2 ; i*i <= n ; i++ ) {
        if ( n % i == 0 ) {
            return i;
        }
    }
    return n;
}

int main () {
    lli n; cin >> n;
    cout << ((n - fact(n)) / 2) + 1<< endl;
    return 0;
}
