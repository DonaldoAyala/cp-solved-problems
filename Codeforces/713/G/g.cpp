#include <bits/stdc++.h>

using namespace std;

vector<int> divs;
vector<int> ans;
int n;

void divsSieve ( ) {
    n = 1e7;
    ans = vector<int>(n + 1, -1);
    divs = vector<int>(n + 1);
    for ( int i = 1 ; i <= n ; ++i ) {
        for ( int j = i ; j <= n ; j += i ) {
            divs[j] += i;
        }
    }
    for ( int i = 1 ; i <= n ; ++i ) {
        if ( divs[i] <= n && ans[divs[i]] == -1 ) ans[divs[i]] = i;
    }
}

void solve() {
    int k; cin >> k;
    cout << ans[k] << endl;
}

int main () {
    int t; cin >> t;
    divsSieve();
    while ( t-- ) solve();
    return 0;
}
