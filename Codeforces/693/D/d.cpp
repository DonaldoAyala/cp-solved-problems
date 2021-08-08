#include <bits/stdc++.h>

using namespace std;

void solve () {
    int n; cin >> n;
    vector<int> v(n);
    for ( auto &x : v ) cin >> x;
    sort(v.rbegin(), v.rend());
    long long a = 0;
    long long b = 0;
    for ( int i = 0 ; i < n ; i++ ) {
        if ( i % 2 == 0 ) {
            if ( v[i] % 2 == 0 ) {
                a += v[i];
            }
        } else {
            if ( v[i] % 2 == 1 ) {
                b += v[i];
            }
        }
    }
    if ( a > b ) {
        cout << "Alice" << endl;
    } else if ( b > a ) {
        cout << "Bob" << endl;
    } else {
        cout << "Tie" << endl;
    }
}

int main () {
    int t; cin >> t;
    while ( t-- ) solve();
    return 0;
}
