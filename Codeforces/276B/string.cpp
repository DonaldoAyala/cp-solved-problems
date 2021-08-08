#include <bits/stdc++.h>

using namespace std;

int main () {
	string s; cin >> s;
	vector<int> occur(30, 0);
	int odd_ocurrences = 0;
	for( int i = 0; i < s.size() ; i++) {
		occur[ s[i] - 97 ]++;
	}
	for ( auto x : occur) {
		//not divisible by 2
		if(x % 2) odd_ocurrences++;
	}
	if(odd_ocurrences <= 1) {
		cout << "First\n";
		return 0;
	}
	if (odd_ocurrences % 2) {
		cout << "First\n";
	} else {
		cout << "Second\n";
	}
	return 0;
}