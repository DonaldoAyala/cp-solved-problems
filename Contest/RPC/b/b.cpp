#include <bits/stdc++.h>
using namespace std;
int main () {
	int lr, hr; cin >> lr >> hr;
	int n ; cin >> n;
	long long x,y,z;
	for ( int i = 0 ; i < n ; i++ ) {
		x = 0 ; y = 0;z = 0;
		cin >> x;
		y = x - 1000;
		if ( x >= 1000 ) {
			cout << x << " " << 1000 * lr + y *hr << endl;
		} else {
			cout << x << " " << x * lr  << endl;	
		}
	}
	return 0;
}