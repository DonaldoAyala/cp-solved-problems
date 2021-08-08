#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(NULL)
#define endl '\n'
using namespace std;

void solve () {
	int n,k,l; cin >> n >> k >> l;
	int ma = 0;
	int x;
	for ( int i = 0 ; i < n ; i++ ) {
		cin >> x;
		x -= k;
		ma = max (ma,x);
	}
	if ( ma <= l) cout << "Yes" << endl;
	else cout << "No" << endl;
}

int main () {
	FAST_IO;
    int t ; cin >> t;
    while ( t-- ) {
    	solve();
    }
    return 0;
}