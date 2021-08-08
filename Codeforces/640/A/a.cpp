#include <bits/stdc++.h>

using namespace std;


void solve() {
    int n; cin >> n;
    int res;
    int factor = 1;
    vector<int> s;
    while ( n ) {
        res = n % 10;
        n /= 10;
        if ( res ) s.push_back(res * factor);
        factor *= 10;
    }
    cout << s.size() << endl;
    for ( auto x : s ) {
        cout << x << " ";
    }
    cout << endl;
}

int main () {
    int t; cin >> t;
    while ( t-- ) solve();
    return 0;
}
