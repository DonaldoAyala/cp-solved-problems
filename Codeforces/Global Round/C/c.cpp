#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(NULL)
#define endl '\n'
#define lli long long
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> v[i];    
    }
    int curr_max = v[0];
    int num_moves = 0;
    int ans = 0;
    for ( int i = 1 ; i < n ; i++ ) {
        while ( i < n && v[i] < curr_max ) {
            num_moves = max(num_moves,curr_max-v[i]);
            i++
        }
        ans += num_moves;
        curr_max = v[i];
    }
    
}

int main () {
    FAST_IO;
    int t; cin >> t;
    while ( t-- ) {
        solve();
    }
    return 0;
}
