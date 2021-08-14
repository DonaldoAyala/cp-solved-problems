#include <bits/stdc++.h>

using namespace std;

int find(int lt, int rt, int size, const vector<pair<int,int>> &v) {
    int l = 0, r = size - 1, m = l + (r - l) / 2;

    while (l <= r) {
        m = l + (r - l) / 2;
        if (v[m].first <= lt) {
            if (rt <= v[m].second ) {
                return m;
            } else {
                l = m + 1;
            }
        } else {
            r = m - 1;
        }
    }
    return -1;
}

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

    sort(f.begin(), f.end());

    for (int i = 0; i < q; i++){
        int in = find(v[i].first, v[i].second, m, f);
        if (in != -1) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}