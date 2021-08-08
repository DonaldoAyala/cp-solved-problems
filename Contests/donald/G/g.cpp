#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(NULL)
#define endl '\n'
using namespace std;
int main () {
    FAST_IO;
    int n; cin >> n ;
    string s;
    vector<string> ans;
    string global;
    vector<vector<string>> v(n,vector<int>(3));
    for ( int i = 0 ; i < n ; i++ ) {
	    	cin >> s;
	    	sort(s.begin(),s.end(),greater<>());
	    	ans.push_back(s);
    }
    for( int i = 0 ; i < n ; i++) {
    	v[i] = {ans[i][0],ans[i][ans[i].size()-1],ans[i]};
    }
    sort(v.begin(),v.end());
    for ( int i = 0 ; i < n-1 ; i++ ) {
    	global.append(v[i][2]);
    }
    sort(global.begin(),global.end(),greater<>());
    string aux1 = global, aux2 = ans[n-1][2];
    aux1.append(ans[n-1][2]);
    aux2.append(global);
    if ( aux1 > aux2 ) {
    	cout << aux1 << endl;
    } else {
    	cout << aux2 << endl;
    }
    return 0;
}