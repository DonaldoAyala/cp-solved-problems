#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(NULL)
#define endl '\n'
using namespace std;

int diff (int r, int g, int b, int y) {
	int ma = max(max(r,g),max(b,y));
	int mi = min(min(r,g),min(b,y));
	return ma - mi;
}

int main () {
    FAST_IO;
    string s; cin >> s;
    int r=0,g=0,b=0,y=0;
    int min_dif = INT_MAX;
    int begin = 0, end = 0;
    int l = 0;
    for ( int ri = 0; ri < s.size() ; ri++ ) {
    	if (s[ri] == 'R') r++;
    	if (s[ri] == 'G') g++;
    	if (s[ri] == 'B') b++;
    	if (s[ri] == 'Y') y++;
    	if ( diff(r,g,b,y) == min_dif ) {
    		if ( ri-l > end - begin ) {
    			begin = l; end = ri;
    		}
    	} else if (diff(r,g,b,y) < min_dif) {
    		min_dif = diff(r,g,b,y);
    		begin = l; end = ri;
    	} else {
    		if ( l == s.size() ) break;
    		if (s[l] == 'R') r--;
	    	if (s[l] == 'G') g--;
	    	if (s[l] == 'B') b--;
	    	if (s[l] == 'Y') y--;
	    	l++;
    	}
    }
    cout << min_dif << " " << end - begin + 1<< endl;
    cout << begin+1 << " " << end+1 << endl;
    return 0;
}