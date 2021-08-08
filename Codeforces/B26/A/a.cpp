#include <bits/stdc++.h>
#define lli long long int

using namespace std;

vector<lli> sieve(lli n) {
    vector<lli> v(n + 1, 0);
    for ( int i = 2 ; i <= n ; i++ ) {
        if ( v[i] == 0 ) {
            for ( int j = 2*i ; j <= n ; j += i ) {
                v[j]++;
            }
        }
    }

    return v;
}

int main () {
    int n; cin >> n;
    vector<lli> s = sieve(n);
    lli res = 0;
    for ( int i = 0 ; i <= n ; i++ ) {
        if ( s[i] == 2 ) res++;
    }
    cout << res << endl;
    return 0;
} 
