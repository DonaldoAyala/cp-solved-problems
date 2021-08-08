#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(NULL)
#define endl '\n'
using namespace std;

string s,o;

void operation ( int ind ) {
	for ( int i = 0 ; i <= ind ; i++ ) {
		if (s[ind - i] == '0') s[i] = '1';
		else s[i] = '0';
	}
	cout << ind << endl;
	cout << s << endl;
}

void solve() {
	int n; cin >> n;
	cin >> s >> o;
	int steps = 0;
	int prefix = -1;
	vector<int> prs;
	while ( steps <= 3*n && s != o ) {
		prefix = -1;
		for ( int l = 0, r = n-1 ; l < n && r >= 0 ; r--,l++ ) {
			if (s[l] == o[r]){
				prefix = l;
				cout << "prefix: "<< prefix<< endl;
				prs.push_back(l);
				break;
			}
		}
		if ( prefix > -1 ) {
			operation(prefix);
		} else {
			operation(n-1);
		}
		steps++;
	}
	cout << s << endl;
	cout << steps << endl;
	for ( auto x:prs) cout << x << " ";
	cout << endl;
}

int main () {
    FAST_IO;
    int t; cin >> t;
    while (t--) {
    	solve();
    }
    return 0;
}