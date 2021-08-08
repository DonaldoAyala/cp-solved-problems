#include <bits/stdc++.h>

using namespace std;

int main () {
    int n; cin >> n;
    vector<pair<int,int>> v;
    int a,b;
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> a >> b;
        v.push_back({a,b});
    }
    int ans = 1;
    int aux = 1;
    pair<int,int> curr = v[0];
    for ( int i = 1 ; i < n ; i++ ) {
        while ( i < n && curr.first == v[i].first && curr.second == v[i].second ) {
            i++;
            aux++;
        }
        ans = max(ans, aux);
        aux = 1;
        curr = v[i];
    }
    cout << ans << endl;
    return 0;
}
