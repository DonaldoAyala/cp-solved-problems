#include <bits/stdc++.h>
using namespace std;
int main () {
    int n,m; cin >> n >> m;
    vector<pair<int,int>> dr(m);
    int a,b;
    for ( int i = 0 ; i < m ; i++ ) {
        cin >> a >> b;
        dr[i] = {a,b};
    }
    sort(dr.begin(),dr.end());
    for ( auto x : dr ) {
        if ( n > x.first ) n += x.second;
        else{
           cout << "NO\n";
           return 0;
        }
    }
    cout << "YES\n";
    return 0;
}
