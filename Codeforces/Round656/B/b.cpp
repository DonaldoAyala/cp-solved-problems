#include <bits/stdc++.h>
#define endl '\n'
#define MAX INT_MAX
#define MIN INT_MIN
#define lli long long


using namespace std;

int main () {
	int t; cin >> t;
	int x;
	while ( t-- ) {
		int n ; cin >> n;
		vector <bool> is(51,false);
		vector<int> ans;
		for ( int i = 0 ; i < 2*n ; i++) {
			cin >> x;
			if ( !is[x] ) {
				ans.push_back(x);
				is[x] = true;
			} 
		}
		for ( auto x : ans) cout << x << " ";
		cout << endl;
	}
	return 0;
}