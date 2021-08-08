#include <bits/stdc++.h>
#define endl '\n'
#define lli long long


//This solution is  recursive but slow

using namespace std;

vector<lli> stones;
vector<lli> dp;
int n;

lli solve(int lp, int cp) {
    if(cp > n) return 1 << 29;
    if(dp[n] != -1) return dp[cp];
    if(cp == n) return abs(stones[lp]-stones[cp]);
    int cost = abs(stones[lp]-stones[cp]);
    return  dp[cp] = cost + min(solve(cp,cp+1),solve(cp,cp+2));
}

int main() {
    cin>>n;
    stones = vector<lli>(n+1);
    dp = vector<lli>(n+1,-1);
    for(int i=1;i<n+1;i++) {
        cin>>stones[i];
    }
    cout<<solve(1,1)<<endl;
    return 0;
}
