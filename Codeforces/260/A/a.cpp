#include <bits/stdc++.h>

using namespace std;

int main () {
    int n; cin >> n;
    vector<pair<int, int>> v;
    int a, b;
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> a >> b;
        v.push_back({a, b});
    }
    sort(begin(v), end(v));
    for ( int i = 1 ; i < n ; i++ ) {
        if ( v[i-1].second > v[i].second && v[i-1].first < v[i].first ) {
            cout << "Happy Alex\n";
            return 0;            
        }
    }
    cout << "Poor Alex\n";
    return 0;
}
