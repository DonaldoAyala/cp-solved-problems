#include <bits/stdc++.h>
#define endl '\n'
#define MAX INT_MAX
#define MIN INT_MIN
#define lli long long


using namespace std;

int main () {
	int t ; cin >> t;
	int x,y,z;
	int a,b,c;
	while ( t-- ) {
		cin >> x >> y >> z;
		if ( x == y && x >= z || x == z && x >= y || y == z && y >= x ) {
			cout << "YES" << endl;
			if (x == y && y == z){
				a = x; b = x; c = x;
			} else if ( x == y ) {
				a = x;
				b = z; c = z;
			} else if ( x == z ) {
				b = x;
				a = y; c = y;
			} else {
				c = y;
				a = x; b = x;
			}
			cout << a << " " << b << " " << c << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	return 0;
}