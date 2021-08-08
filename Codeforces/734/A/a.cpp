#include <bits/stdc++.h>

using namespace std;

int main () {
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		int c1, c2; c1 = c2 = n / 3;
		int total = c1 + c2 * 2;
		if ( total < n){
			if (total + 1 == n) c1++;
			if (total + 2 == n) c2++;
		}
		cout << c1 << " " << c2 << "\n";
	}
	return 0;
}
