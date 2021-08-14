#include <bits/stdc++.h>

using namespace std;

int main () {
    int ans = 0;
    int n; cin >> n;
    vector<int> v(n);
    for (auto &x: v) cin >> x;

    vector<int> a = v;

    sort(v.begin(), v.end());

    for (int i = 0 ; i < n ; i++) {
        if (v[i] == a[i]) ans++;
    }

    cout << ans << endl;

    return 0;
}