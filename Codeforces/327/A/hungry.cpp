#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(NULL)
#define lli long long
#define endl '\n'
using namespace std;

void solve () {
    int n; cin >> n;
    lli beg = 10000000 - n - 10;
    for ( lli i = beg ; i < 10000000 - 10 ; i++ ) {
        cout << i << " ";
    }
    cout << endl;
}

int main () {
    FAST_IO;
    //int t; cin >> t;
    int t = 1;
    while ( t-- ) {
        solve();
    }
    return 0;
}
