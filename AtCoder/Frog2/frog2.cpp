#include <bits/stdc++.h>
#define endl '\n'
#define INF 1e9 + 5

//This solution is  recursive but slow

using namespace std;

int main() { 
    int n; cin >> n;
    int k;cin>>k;
    int jumps[n];
    vector<int> dp(n, INF); 
    int aux = 0;
    //Reading data
    for (int i = 0; i < n; i++) cin >> jumps[i];
    //Initialize base cases
    dp[0] = 0;
    //Initialize dp
    for ( int i = 0; i < n; i++ ) {
        for ( int j = i + 1; j <= i + k; j++ ) {
            if (j < n)
                dp[j] = min(dp[j], dp[i] + abs( jumps[j] - jumps[i]));
        } 
    }
    cout << dp[n - 1] << endl;
    return 0;
}
