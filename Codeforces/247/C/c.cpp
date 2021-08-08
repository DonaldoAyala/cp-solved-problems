#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

vector<vector<int>> dp;

long long dfs (int n, const int &k, const int &d, bool e) {
    if ( dp[n][(int)e] != -1 ) return dp[n][(int)e];
    if ( n == 0 && e ) return 1;
    if ( n == 0 && !e ) return 0;
    long long ways = 0;
    for ( int i = 1 ; i <= k ; i++ ) {
        if ( i > n ) break;
        if ( i >= d )
            ways += dfs(n - i, k, d, true) % mod;
        else
            ways += dfs(n - i, k, d, false || e) % mod;
    }
    return dp[n][(int)e] = ways % mod;
}

void solve() {
    int n,k,d;cin>>n>>k>>d;
    dp = vector<vector<int>> (100 + 10, vector<int> (2, -1));
    cout << dfs(n, k, d, false) << endl;
}

int main () {
    int t = 1;
    while (t--) solve();
    return 0;
}
