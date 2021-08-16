#include <bits/stdc++.h>

using namespace std;


int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, q; cin >> n >> m >> q;
    vector<pair<int,int>> f(m);
    vector<pair<int,int>> v(q);

    for (auto &x: f) cin >> x.first >> x.second;
    int a, b;
    for (auto &x: v) {
        cin >> x.first >> x.second;
        if (x.first > x.second) swap(x.first, x.second);
    }

	vector<int> ranges(n + 1);
	for (int i = 1 ; i < n + 1; i++) {
		ranges[i] = i;
	}

	for (int i = 0; i < m; i++) {
		ranges[f[i].first] = max(ranges[f[i].first], f[i].second);
	}
	
	int ma = ranges[1];
	for (int i = 1; i < n + 1; i++) {
		ma = max(ma, ranges[i]);
		ranges[i] = ma;
	}

    for (int i = 0; i < q; i++){
        if (ranges[v[i].first] >= v[i].second) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}
