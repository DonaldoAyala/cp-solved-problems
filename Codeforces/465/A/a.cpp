#include <bits/stdc++.h>
using namespace std;

int main () {
    int n; cin >> n;
    string s; cin >> s;
    int ans = 0;
    if (s[0] == '0' ) {
        cout << 1 << '\n';
        return 0;
    } else {
        while (ans < n && s[ans] == '1') ans++;
    }
    cout << min(ans + 1, n) << '\n';
    return 0;
}
