#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> nums(n);
    for( int i = 0 ; i < n ; i++) {
        cin >> nums[i];
    }
    int ans = nums[0];
    int leftMin = 0;
    vector<int> s(n);
    s[0] = nums[0];

    for( int i = 1 ; i < n ; i++ ) {
        s[i] += s[i-1] + nums[i];
    }
    for( auto x : s) cout<<x<<" ";
    cout<<'\n';
    for ( int i = 0 ; i < n ; i++ ) {
        if (s[i] - leftMin > ans ) ans = s[i] - leftMin;
        if (s[i] < leftMin ) leftMin = s[i];
    }
    cout << ans << '\n';
    return 0;
}
