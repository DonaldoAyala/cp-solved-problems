#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,m; cin >> n >> m;
    vector<char> v(2*m);
    int ans = 0;
    for ( int i = 0 ; i < n ; i++ ) {
        for ( int j = 0 ; j < 2*m ; j ++ ) {
            cin >> v[j];
        }
        for ( int j = 0 ; j < 2*m ; j += 2 ) {
            if ( v[j] == '1' || v[j+1] == '1' ) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
