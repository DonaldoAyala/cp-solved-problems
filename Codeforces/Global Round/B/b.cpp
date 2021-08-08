#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(NULL)
#define endl '\n'
#define lli long long
using namespace std;

void solve () {
	lli n,k; cin >> n >> k;
    lli ma = INT_MIN, next_ma = INT_MIN;
    vector<lli> v(n);
    for ( int i = 0 ; i < n ; i++) {
    	cin >> v[i];
    	if ( v[i] > ma ) ma = v[i];
    }
    for ( int i = 0 ; i < n ; i++ ) {
    	v[i] = ma - v[i];
    	if ( v[i] > next_ma ) next_ma = v[i];
    }
    if ( (k-1) % 2 == 0 ) {
    	for ( int i = 0 ; i < n ; i++ ) {
    		cout << v[i] << " " ;
    	}
    	cout << endl;
    } else {
    	for ( int i = 0 ; i < n ; i++ ) {
    		cout << next_ma - v[i] << " " ;
    	}
    	cout << endl;
    }
}

int main () {
    int t ; cin >> t;
    while ( t-- ) {
    	solve();
    }
    return 0;
}