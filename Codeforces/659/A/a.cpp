#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(NULL)
#define endl '\n'
using namespace std;

string base = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
string baseb = "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb";

void solve () {
    int n; cin >> n;
    vector<string> v(n+1);
    vector<int> nums(n);
    for ( int i = 0 ; i < n ; i++ ) {
    	cin >> nums[i];
    }
    char l = 0;
    v[0] = base.substr(0,nums[0]);
    for ( int i = 0 ; i < n ; i++ ) {
    	if ( v[i].size() >= nums[i] ) {
    		v[i+1] = v[i].substr(0,nums[i]);
    	} else {
    		v[i+1] = v[i];
    	}
    	while ( v[i].size() < nums[i] ) v[i].push_back((char)(97 + l%25));
    	while ( v[i+1].size() < nums[i] ) v[i+1].push_back((char)(97 + l%25));
    	l++;
    }
    l = 0;
    for ( auto x : v ) {
    	if ( x.size() ) cout << x << endl;
    	else cout << (char)(97 + l%25) << endl;
    	l++;
    }
}

int main () {
    FAST_IO;
    int t; cin >> t;
    while ( t-- ) {
        solve();
    }
    return 0;
}