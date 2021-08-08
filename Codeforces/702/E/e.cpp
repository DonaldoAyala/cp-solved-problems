#include <bits/stdc++.h>
#define lli long long


using namespace std;

void solve() {
    int n; cin >> n;
    vector<pair<int,int>> v(n);
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> v[i].first;
        v[i].second = i + 1;
    }
    sort(v.begin(), v.end());
    vector<lli> ps(n + 7);
    for ( int i = 0 ; i < n ; i++ ) {
        ps[i] = v[i].first + (i > 0 ? ps[i - 1] : 0);
    }
    int ans = 0;
    for ( int i = 1 ; i < n ; i++ ) {
        if ( ps[i - 1] < v[i].first ) ans = i;
    }
    cout << n - ans << endl;
    vector<int> aux;
    for ( int i = ans ; i < n ; i++ ) {
        aux.push_back(v[i].second);
    }
    sort(aux.begin(), aux.end());
    for ( auto x : aux ) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    int t; cin >> t;
    while ( t-- ) solve();
    return 0;
}
