#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> dpa;
vector<vector<int>> dpb;
vector<int> v;
int max_substring(int l, int r) {
	if ( l + 1 == r && v[l] != v[r] ) return 0;
	if ( l + 1 == r && v[l] != v[r] ) return a[l] + 1;
	if ( l == r ) return a[l];
	int x = max_substring(  );
}


int main () {
	int n; cin >> n;
	v = vector<int>(n);
	for ( auto &x: v ) cin >> x;
	dpa = vector<vector<int>>(n + 1, vector<int>(n + 1));
	dpb = vector<vector<int>>(n + 1, vector<int>(n + 1));

	return 0;
}