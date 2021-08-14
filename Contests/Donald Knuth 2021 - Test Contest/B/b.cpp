#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s; cin >> s;
    if (s.size() > 10) {
        cout << s[0] << s.size() - 2 << s[s.size() - 1] << '\n';
    } else {
        cout << s << '\n';
    }
}

int main () {
    int t; cin >> t;
    //t = 1;
    while (t--) solve();
    return 0;
}