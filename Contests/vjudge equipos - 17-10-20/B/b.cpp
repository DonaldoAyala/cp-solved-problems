#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(NULL)
#define endl '\n'
using namespace std;

int main () {
    int n ; cin >> n;
    vector<int> v(n);
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> v[i];
    }
    vector<long long> sum(n);
    sum[0] = v[0];
    for ( int i = 1 ; i < n ; i++ ) {
        sum[i] = (sum[i-1] + v[i]);
    }
    long long ans = 0;
    for ( int i = 0 ; i < n ; i++ ) {
        ans += (v[i]*((sum[n-1] - sum[i]) % 1000000007) % 1000000007);
        ans = ans % 1000000007;
    }
    cout << ans << endl;
    return 0;
}