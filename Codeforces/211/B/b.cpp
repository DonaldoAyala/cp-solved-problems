#include <bits/stdc++.h>
using namespace std;

int main () {
    int n,k;cin>>n>>k;
    vector<int> v(n);
    for ( auto &x : v ) cin >> x;
    int ans = INT_MAX;
    int w = 0;
    for ( int i = 0 ; i < k ; i++ ) {
        w += v[i];
    }
    int l = 0, r = k - 1;
    ans = w;
    int ans_i = 0;
    while ( r + 1 < n ) {
        w -= v[l++];
        w += v[++r];
        if ( w < ans ) {
            ans = w;
            ans_i = l;
        }
    }
    cout << ans_i + 1 << endl;
    return 0;
}
