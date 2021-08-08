#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(NULL)
#define endl '\n'
using namespace std;

void solve() {
	int n; cin >> n;
	string in, out; cin >> in >> out; 
	string aux = "";
	for ( int i = 0 ; i < n ; i++ ) aux.push_back('u');
	vector<string> ans(n,aux);
	for ( int j = 0 ; j < n ; j++ ) {
		ans[j][j] = 'Y';
		if ( j+1 < n ) {
			if (out[j] == 'Y' && in[j+1] == 'Y') ans[j][j+1] = 'Y';
			else ans[j][j+1] = 'N';
		}
		if ( j+1 < n ) {
			if ( in[j] == 'Y' && out[j+1] == 'Y' ) ans[j+1][j] = 'Y';
			else ans[j+1][j] = 'N';
		}
	}
	for ( int j = 0 ; j < n ; j++ ) {
		for ( int i = 0 ; i < n ; i++ ) {
			if ( ans[j][i] == 'u' && i >= j ) {
				if ( ans[j][i-1] == 'Y' ) {
					if (out[i-1] == 'Y' && in[i] == 'Y')
						ans[j][i] = 'Y';
					else
						ans[j][i] = 'N';
				} else {
					ans[j][i] = 'N';
				}
			} else if ( ans[j][i] == 'u' && i < j ) {
				if ( ans[j-1][i] == 'Y' ) {
					if (out[j] == 'Y' && in[j-1] == 'Y')
						ans[j][i] = 'Y';
					else
						ans[j][i] = 'N';
				} else {
					ans[j][i] = 'N';
				}
			}
		}
	}
	for ( auto s : ans ) {
		cout << s << endl;
	}
}

int main () {
    FAST_IO;
    int t; cin >> t;
    for ( int i = 1 ; i <= t ; i++ ) {
    	cout << "Case #" << i << ":" << endl;
    	solve();
    }
    return 0;
}