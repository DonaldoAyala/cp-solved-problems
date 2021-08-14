#include <bits/stdc++.h>

using namespace std;

int main () {
    int n; cin >> n;
    vector<int> v(n);

    for(auto &x: v) cin >> x;
    sort(v.begin(), v.end());

    int ans = 0;
    for (int i = 0; i < n - 1; i += 2) {
        ans += abs(v[i] - v[i + 1]);
    }

    cout << ans << endl;
    return 0;
}