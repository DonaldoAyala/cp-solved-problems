#include <bits/stdc++.h>
#define INF INT_MAX
#define endl '\n'

using namespace std;

//DP stores saves the minimum number of operations to make a number 0 by subtracting 1,2 or 5
vector<int> dp(1200 , INF);
vector<int> choco = {1,2,5};
vector <int> el = {0,1,2,5};

//Initialization of DP
void downtozerodp() {
    //Base cases for 1,2,5
    dp[0] = 0; dp[1] = 1; dp[2] = 1; dp[5] = 1;
    //
    for ( int i = 0; i < 1000 + 200 ; i++ ) {
        for ( auto chg : choco) {
            if ( i - chg >= 0)
                dp[i] = min( dp[i],  dp[ i - chg ] + 1);
        }
    }
}

void solve() {
    int n; cin>>n;
    vector<int> f(n);
    int sm = INF;
    int ans = INF;
    for ( int i = 0; i < n; i++ ) {
        cin>>f[i];
        //save the friend with the minimum number of chocolates
        sm = min(sm,f[i]);
    }
    //You can subtract 1,2 or 5 to the minimum
    for( auto var: el) {
        int ansl = 0;
        for( int i = 0 ; i < n ; i++ ) {
        	//look for the number of operations to make a number equal to the minimum and add it to the local answer
            ansl += dp[f[i] - (sm - var)];
        }
        //Select the minimum option
        ans = min(ansl,ans);
    }
    cout<<ans<<endl;
}

int main() {
    downtozerodp();
    int t; cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}
