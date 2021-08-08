#include <bits/stdc++.h>

using namespace std;

void solve() {
    int a,b; cin>>a>>b;
    if ( min(a,b)*2 >= max(a,b) ) cout << 2*min(a,b)*2*min(a,b) << endl;
    else cout << max(a,b) * max(a,b) << endl;
}

int main () {
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
