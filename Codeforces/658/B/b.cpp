#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(NULL)
#define endl '\n'
using namespace std;

void solve () {
	int n;
	cin >> n;
	int x;
	// no one chooses
	int chooses = 0;
	int turn = 1;
	for ( int i = 0 ; i < n ; i++ ) {
		cin >> x;
		if ( x > 1 && !chooses ) chooses = turn;
		if (turn == 1) turn = 2;
		else turn = 1;
	}
	if ( chooses ) {
		if ( chooses == 1 ) cout << "First" << endl;
		else cout << "Second" << endl;
	} else {
		if ( n%2 == 0) cout << "Second" << endl;
		else cout << "First" << endl;
	}
}

int main () {
	FAST_IO;
    int t ; cin >> t;
    while ( t-- ) {
    	solve();
    }
    return 0;
}