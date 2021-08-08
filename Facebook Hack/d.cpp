#include <bits/stdc++.h>
#define lli long long int
#define pb push_back
#define fi first
#define se second

using namespace std;

vector<pair<lli,lli>> c;
int n, q;

void printvector() {
    for ( int i  =0 ; i < c.size() ; i++ ) {
        cout << c[i].fi << " " << c[i].second << endl;
    }
}

lli f(lli x0, lli xn, lli yn, lli d) {
    return (-1 * x0) + xn + yn + d;
}

bool le (pair<lli,lli> p, pair<lli,lli> b) {
    return  p.fi <= b.fi && p.se <= b.se;
}

lli lb (pair<lli,lli> p) {
    lli l = 0, r = c.size()- 1, m = l + (r - l) / 2;
    while ( l < r ) {
        // cout << "l: " << l <<  "m: " << m << " r: " <<  r << endl;
        // cout << "searching: " << p.fi << "," << p.se << endl;
        // cout << "checking: " << c[m].fi << "," << c[m].se << endl;
        if ( le(p, c[m]) ) {
            r = m;
        } else {
            l = m + 1;
        }
        m = l + (r - l) / 2;
    }
    return r;
}



void solve() {
    lli x,y,d; cin >> x >> y >> d;
    lli ans = 0;
    lli idx = lb( {x,y} );
    //cout << idx << endl;
    for ( int i = idx ; i < n ; i++ ) {
        int xc, yc;
        xc = c[i].fi; yc = c[i].se;
        lli fans = f(xc, x, y, d);
        if ( xc >= x && yc >= y && (fans == yc || yc < -1 * (xc) + x + y + d) ) {
            ans++;
        } else {
            break;
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
    sort(c.begin(), c.end());
    for ( int i = 0 ; i < q ; i++ ) {
        solve();
    }

    return 0;
}