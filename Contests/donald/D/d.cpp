#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(NULL)
#define endl '\n'
using namespace std;
int main () {
    FAST_IO;
    /*unsigned long long n; cin >> n;
    unsigned long long m = round(sqrt(n));
    cout << m*(n-((2*m*m+3*m-5)/(6))) % (1000000000 + 7) << endl;
    */
    unsigned long long n; cin >> n;
    unsigned long long ans = 0;
    vector<unsigned long long> p;
    for ( int i = 1 ; i <= n*2 ; i++ ) {
    	i = i << 1;
    	p.push_back(i);
    }
    unsigned long long lb = *lower_bound(p.begin(),p.end(),n) - 1;
    unsigned long long up = *upper_bound(p.begin(),p.end(),n);
    cout << up - lb << endl;
    /*for ( unsigned long long i = 1 ; i <= n ; i++ ) {
    	ans += round(sqrt(i));
    	cout << i<<":      " << round(sqrt(i)) << endl;
    	cout << "ans: " << ans<< endl;
    }
    cout << ans % (1000000000 + 7) << endl;
    */
    return 0;
}