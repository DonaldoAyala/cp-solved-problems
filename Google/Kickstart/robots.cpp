#include <bits/stdc++.h>
#define lli long long
using namespace std;

void solve() {
	lli n, k; cin >> n >> k;
	lli s,e;
	vector<pair<lli, lli>> v;
	for ( int i = 0 ; i < n ; i++ ) {
		cin >> s >> e;
		v.push_back({s, e});
	}
	sort(v.begin(), v.end());
	lli num_deployments = 0;
	lli last_end = -1;
	double time;
	int shift = 0;
	for ( int i = 0 ; i < n ; i++ ) {
		if ( last_end < v[i].second ) {
			time = v[i].second - v[i].first;
			if ( last_end > v[i].first ) shift = (last_end - v[i].first);
			else shift = 0;
			time -= shift;
			if (time > 0)
				num_deployments += ceil(time / (float)k);
			last_end = v[i].first + shift + ceil(time / (float)k) * k;
		}
	}
	cout << " " << num_deployments;
}

int main () {
    int t; cin >> t;
    for ( int i = 0 ; i < t ; i++ ) { 
        cout << "Case #" << i + 1 << ":";
        solve();
        cout << endl;
    }
    return 0;
}