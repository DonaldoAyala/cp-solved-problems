#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(NULL)
#define endl '\n'
using namespace std;

void solve () {
	int ax,ay,az;
	int bx,by,bz;
	cin>>ax>>ay>>az;
	cin >>bx>>by>>bz;
	int aux = 0;
	long long ans = 0;
	ans += 2*min(az,by);
	aux = min(az,by);
	az -= aux; by -= aux;
	aux = min(az,bz);
	az -= aux; bz -= aux;
	aux = min(az,bx);
	az -= aux; bx -= aux;
	aux = min(ax,bz);
	ax -= aux; bz -= aux;
	aux = min(ax,by);
	ax -= aux; by -= aux;
	aux = min(ax,by);
	ax -= aux; by -= aux;
	aux = min(ax,bx);
	ax -= aux; bx -= aux;
	aux = min(ay,bx);
	ay -= aux; bx -= aux;
	aux = min(ay,by);
	ay -= aux; by -= aux;
	aux = min(ay,bz);
	ans -= 2*aux;
	ay -= aux; bz -= aux;
	cout << ans << endl;
}

int main () {
	FAST_IO;
    int t ; cin >> t;
    while ( t-- ) {
    	solve();
    }
    return 0;
}