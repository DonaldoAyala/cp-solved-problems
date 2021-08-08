#include <bits/stdc++.h>
#define sui short unsigned int
#define ui unsigned int

using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for ( auto &x : v ) cin >> x;
    int cea = 0, ceb = 0;
    int ccea = 0, cceb = 0;
    int ai = 0, bi = n - 1;
    int nm = 0;
    while ( ai <= bi ) {
        ccea = 0;
        if ( ccea <= cceb && ai <= bi ) nm++;
        while ( ccea <= cceb && ai <= bi ) {
            cea += v[ai];
            ccea += v[ai];
            ai++;
        }
        cceb = 0;
        if ( ccea >= cceb && ai <= bi ) nm++;
        while ( ccea >= cceb && ai <= bi ) {
            ceb += v[bi];
            cceb += v[bi];
            bi--;
        }
    }
    printf("%d %d %d\n", nm, cea, ceb);
}

int main () {
    int t; cin >> t;
    while ( t-- ) solve();
    return 0;
}
