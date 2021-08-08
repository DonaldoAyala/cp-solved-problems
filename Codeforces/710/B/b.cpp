#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s;
    int n, k; cin>>n>>k;
    cin >> s;
    int ans = 1;
    int i = s.find_first_of('*');
    while ( true ) {
        int j = min(n - 1, i + k);
        for (; i < j && s[j] == '.'; j-- ) {}
        if ( i == j ) break;
        ans++;
        i = j;
    }
    cout << ans << endl;
}

int main () {
    int t; cin>>t;
    while(t--)solve();
    return 0;
}
