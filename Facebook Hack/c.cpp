#include <bits/stdc++.h>
#define lli long long int
#define pb push_back
#define fi first
#define se second

using namespace std;

vector<pair<int,int>> c;
int n, q;

lli f(lli x0, lli xn, lli yn, lli d) {
    return (-1 * x0) + xn + yn + d;
}



void solve() {
    lli x,y,d; cin >> x >> y >> d;
    lli ans = 0;
    for ( int i = 0 ; i < n ; i++ ) {
        int xc, yc;
        xc = c[i].fi; yc = c[i].se;
        lli fans = f(xc, x, y, d);
        if ( xc >= x && yc >= y && (fans == yc || yc < -1 * (xc) + x + y + d) ) {
            ans++;
        }
    }
    cout << ans << endl;
}

int main () {
    cin >> n >> q;
    
    int x, y;
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> x >> y;
        c.pb({x,y});
    }
    for ( int i = 0 ; i < q ; i++ ) {
        solve();
    } 

    return 0;
}