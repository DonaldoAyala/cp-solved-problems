#include <bits/stdc++.h>
using namespace std;
int main () {
    int n,m; cin >> n >> m;
    vector<int> v(m);
    for ( int i = 0 ; i < m ; i++ ) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int l = 0, r = n-1;
    int mindif = INT_MAX;
    for ( ; r < m ; r++,l++ ) {
        mindif = min( mindif , v[r] - v[l] );
    }
    cout << mindif << '\n';
    return 0;
}
