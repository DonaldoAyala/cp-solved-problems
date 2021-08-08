#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(NULL)
#define endl '\n'
#define lli long long
using namespace std;

int main () {
    FAST_IO;
    int n ; cin >> n;
    lli k = 1;
    lli t = 1;
    for ( int i = 1 ; i <= n ; i++ ) {
    	k *= i;
    	k %= 1000000007;
    	if ( i == n ) continue;
    	t <<= (n != i);
    	t %= 1000000007;
    }
    k -= t;
    if (k < 0) k+=1000000007;
    cout << k << endl; 
    return 0;
}
