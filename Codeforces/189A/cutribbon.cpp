#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a[3] = {0,0,0};
    cin >> n >> a[0] >> a[1] >> a[2];
    vector<int> v;
    if (a[0] != a[1] && a[0] != a[2] ) v.push_back(a[0]);
    if (a[1] != a[2] ) v.push_back(a[1]);
    v.push_back(a[2]);

    vector<int> cuts(n+5);
    for ( int j = 0 ; j < v.size() ; j++ ) {
        if ( v[j] < n+5 )
            cuts[v[j]] = 1;
    }
    for ( int i = 0 ; i < n+5 ; i++ ) {
        if ( cuts[i] > 0 ) 
            for ( auto in : v ) {
                if ( i + in < n+5 )
                    cuts[ i + in ] = max(cuts[i] + 1,cuts[i+in]);
            }
    }
    int i = 0;
    cout << cuts[n] << '\n';
    return 0;
}
