#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> v(n);
	vector<int> aux(10);
	for ( int i = 0 ; i < n ; i++ ) {
		cin >> v[i];
	}
	sort(v.begin(),v.end());
	for ( int i = 0 ; i < 5 ; i++ ) {
		aux[i] = v[i];
	}
	for ( int i = n - 1 ; i >= n - 5 ; i-- ) {
		aux[i] = v[i];
	}
	long long ma = 1;
	long long maux = 1;
	
}

int main () {
	FAST_IO;
	int t; cin >> t;
	while (t--) {
		solve();
	}
}