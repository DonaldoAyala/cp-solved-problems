#include <bits/stdc++.h>

using namespace std;

int main () {
	int n; cin >> n;
	vector<int> v(n), s;

	for ( auto &x : v ) cin >> x;
	s = v;
	sort( s.begin(), s.end() );

	int ls = 0, rs = 0;
	for ( int i = 0 ; i < n ; i++ ) {
		if ( s[i] != v[i] ) {
			if ( ls == 0 ){ ls = i + 1; rs = i + 1; }
			else rs = i + 1;
		}
	}

	if ( ls != 0 ) {
		reverse( v.begin() + ls - 1, v.begin() + rs );
	}
	/*
	cout << ls << " " << rs << endl;	
	for ( auto &x : v ) cout << x << " ";
	cout << endl;
	for ( auto &x : s ) cout << x << " ";
	cout << endl;
	*/
	for ( int i = 0 ; i < n ; i++ ) {
		if ( s[i] != v[i] ) {
			cout << "no" << endl;
			return 0;
		}
	}
	cout << "yes" << endl;
	if ( ls == 0 ) {
		ls++; rs++;
	}
	cout << ls << " " << rs << endl;
	return 0;
}