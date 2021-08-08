#include <bits/stdc++.h>

#define lli long long

using namespace std;

void solve() {
    lli r, c, x; cin>>r>>c>>x;
    cout << ((x - 1) / r)  + 1 + ((x - 1) % r) * c << endl;
}

int main () {
    int t; cin >> t;
    while ( t-- ) solve();
    return 0;
}

