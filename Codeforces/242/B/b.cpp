#include <bits/stdc++.h>

using namespace std;

int main () {
	int n; cin >> n;
	vector<pair<int,int>> s(n);
	for ( int i = 0 ; i < n ; i++ ) {
		cin >> s[i].first >> s[i].second;
	}
	int min = INT_MAX, max = 0;
	for ( int i = 0 ; i < n ; i++ ) {
		if ( s[i].first < min )
			min = s[i].first;
		if ( s[i].second > max )
			max = s[i].second;
	}
	for ( int i = 0 ; i < n ; i++ ) {
		if ( s[i].first <= min && s[i].second >= max ) {
			cout << i + 1 << endl;
			return 0;
		}
	}
	cout << -1 << endl;
	return 0;
}