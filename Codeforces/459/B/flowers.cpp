#include <bits/stdc++.h>
using namespace std;

int main () {
    long long n ; cin >> n;
    vector <long long> v(n);
    long long mi = INT_MAX, ma = 0;
    for ( long long i = 0; i < n ; i++ ) {
        cin >> v[i];
        if ( v[i] > ma ) ma = v[i];
        if ( v[i] < mi ) mi = v[i];
    }
    long long no_ma = 0, no_mi = 0;
    for ( long long  i = 0 ; i < n ; i++ ) {
        if ( v[i] == ma ) no_ma++;
        if ( v[i] == mi ) no_mi++;
    }
    cout << ma - mi << " ";
    if ( ma == mi ) cout << n * (n-1) / 2 << endl;
    else cout << no_ma * no_mi << endl;
    return 0;
}
