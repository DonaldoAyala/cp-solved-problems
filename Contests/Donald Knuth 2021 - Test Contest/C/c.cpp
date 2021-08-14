#include <bits/stdc++.h>

using namespace std;

int main () {
    int t; cin >> t;
    string s;
    long long ans = 0;
    while (t--) {
        cin >> s;
        if (s[0] == '+' || s[1] == '+') ans++;
        else ans--;
    }
    cout << ans << '\n';
    return 0;
}