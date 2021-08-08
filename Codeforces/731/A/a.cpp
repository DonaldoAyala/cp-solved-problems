#include <bits/stdc++.h>

using namespace std;

void solve() {
	int x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	int res = abs(x1 - x2) + abs(y1 - y2);
	if ( x1 == x2 && x1 == x3 ) {
		if ((y3 < y1 && y3 > y2) || (y3 < y2 && y3 > y1)) {
			res += 2;
		}
	}
	if (y1 == y2 && y1 == y3){
		if ((x3 > x1 && x3 < x2) || (x3 < x1 && x3 > x2))
			res  += 2;
	}
	cout << res << endl;
}

int main () {
	int t; cin >> t;
	while (t--) solve();
	return 0;
}
