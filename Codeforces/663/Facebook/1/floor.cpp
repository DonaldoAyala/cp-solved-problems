#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(NULL)
#define endl '\n'
#define lli long long
#define mod 1000000007
using namespace std;

void solve() {
	// Reading given data
	int n,k,w; cin >> n >> k >> w;
	int al,bl,cl,dl;
	int ah,bh,ch,dh;
	vector<int> l(n);
	vector<int> h(n);
	for ( int i = 0 ; i < k ; i++ ) cin >> l[i];
	cin >> al >> bl >> cl >> dl;
	for ( int i = 0 ; i < k ; i++ ) cin >> h[i];
	cin >> ah >> bh >> ch >> dh;
	// Calculating the rest of the L and H elements
	for ( int i = k ; i < n ; i++ ) {
		l[i] = ( (al * l[i-2] + bl * l[i-1] + cl) % dl ) + 1;
		h[i] = ( (ah * h[i-2] + bh * h[i-1] + ch) % dh ) + 1;
	}
	// Solution
	lli ans = 1;
	lli pi = 0;
	lli global_per = 0;
	lli lno = l[0];
	lli last_height = h[0];
	lli first_height = h[0];
	lli total_height_diff = 0;
	lli last_pos = lno;
	for ( int i = 0 ; i < n ; i++ ) {
		// If current build overlap
		if ( l[i] <= last_pos + w ) {
			total_height_diff += abs(last_height-h[i]);
			pi = ( ( l[i] + w - lno )*2 ) + first_height + h[i] + total_height_diff;
			last_height = h[i];
			ans *= (global_per + pi);
		} else {
			total_height_diff = 0;
			first_height = h[i];
			last_height = h[i];
			global_per += pi;
			lno = l[i];
			pi = ( ( l[i] + w - lno )*2 ) + (h[i]*2);
			ans *= (global_per + pi);
		}
		last_pos = l[i];
		cout << pi << endl;
	}
	ans %= mod;
	cout << ans << endl;
}

int main () {
    FAST_IO;
    int t; cin >> t;
    for( int i = 0 ; i < t ; i++ ) {
    	cout << "Case #"<<i+1<<": ";
    	solve();
    	cout << endl;
    }
    return 0;
}