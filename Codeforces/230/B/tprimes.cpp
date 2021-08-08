#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(NULL)
#define endl '\n'
#define lli long long
using namespace std;

vector<int> v(1000000 + 10, -1);

bool is_prime(lli n){
    if ( v[n] != -1 ) return v[n];
    if (n == 2) return v[n] = true;
    if (n > 2 && !(n & 1) ) return v[n] = false;
    lli last_divisor = (int)sqrt(n);
    for ( lli i = 3 ; i < last_divisor + 1 ; i += 2 ){
        if(n % i == 0) return v[n] = false;
    }
    return v[n] = true;
}

bool bs ( lli x ) {
    lli l = 2, r = x, m = l + (r-l)/2;
    while ( l < r ) {
        if ( m*m == x ) return true;
        else if ( m*m < x ) l = m; 
        else if ( m*m > x ) r = m;
        m = l + (r-l)/2;
    }
    if ( l*l == x ) return true;
    return false;
}

int main () {
    FAST_IO;
    int n; cin >> n;
    lli x; 
    double aux = 0;
    while ( n-- ) {
        cin >> x;
        aux = sqrt(x);
        if ( x == 1 ) {
            cout << "NO" << endl;
            continue;
        }
        if ( fmod(aux,1) == 0 && is_prime( aux ) ) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
