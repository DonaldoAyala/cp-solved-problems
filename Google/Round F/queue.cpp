#include <bits/stdc++.h>
#define lli
using namespace std;

void solve() {
    lli n, x; cin >> n >> x;
    // <number of times a client requeues, index>
    double aux;
    vector<pair<double,int>> q(n);
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> aux;
        q.push({ceil(aux / x) , i + 1});
    }
    sort(q.begin(), q.end());
    for ( auto e : q ) {
        cout << " " << e -> second;
    }
    
}

int main () {
    
    int t; cin >> t;
    for ( int i = 0 ; i < t ; i++ ) { 
        cout << "Case #" << i + 1 << ":";
        solve();
        cout << endl;
    }
    return 0;
}