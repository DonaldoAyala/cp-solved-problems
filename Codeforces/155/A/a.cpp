#include <bits/stdc++.h>
#define lli long long 

const lli mod = 1073741824;

using namespace std;

vector<lli> divsSieve(lli n ) {
    vector<lli> divs( n + 1 );
    for ( int i = 1 ; i <= n ; i++ ) {
        for ( int j = i ; j <= n ; j += i ) {
            divs[j]++;
        }
    }
    return divs;
}

int main ( ) {
    int a, b, c; cin >> a >> b >> c;
    vector<lli> divs = divsSieve( a*b*c );
    lli res = 0;
    for ( int i = 1 ; i <= a ; i++ ) 
        for ( int j = 1 ; j <= b ; j++ ) 
            for ( int k = 1 ; k <= c ; k++ ) {
                res += divs[i*j*k] % mod;
            }
    cout << res << endl;
    return 0;
}
