#include <bits/stdc++.h>
#define endl '\n'


//This solution is  recursive but slow

using namespace std;

int main() { 
    int n; cin >> n;
    int jumps[n];
    vector<int> dp(n, 0); // dp[i] : Minimum cost for the frog to reach position i.
    for (int i = 0; i < n; i++) cin >> jumps[i];
    dp[1] = abs(jumps[1] - jumps[0]); // Base value
    for (int i = 2; i < n; i++)
        dp[i] = min(abs(jumps[i] - jumps[i - 1]) + dp[i - 1], abs(jumps[i] - jumps[i - 2]) + dp[i - 2]);
    cout << dp[n - 1] << endl;
    return 0;
}
