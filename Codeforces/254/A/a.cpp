#include <bits/stdc++.h>

using namespace std;

int main () {
    int n ; cin >> n;
    vector<vector<int>> v( 5000 + 1 );
    int a; int i = 1;
    n *= 2;

    while ( n-- ) {
        cin >> a;
        v[a].push_back( i++ );
    }

    for ( int i = 0 ; i < 5000 + 1 ; i++ ) {
        if ( v[i].size() == 0 )
            continue;
        if ( v[i].size() & 1 ) {
            cout << -1 << endl;
            return 0;
        }
    }
    for ( int i = 0 ; i < 5001 ; i++ ) {
        if ( v[i].size() )
        for ( int j = 0 ; j < v[i].size() ; j+=2 ) {
            cout << v[i][j] << " " << v[i][j+1] << endl;
        }
    }
    return 0;
}
