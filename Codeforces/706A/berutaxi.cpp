#include <bits/stdc++.h>
using namespace std;
int main () {
    int x,y; cin >> x >> y;
    int n; cin >> n;
    int a, b, v;
    double ans = 1000000;
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> a >> b >> v;
        ans = min ( sqrt( (a-x)*(a-x) + (b-y)*(b-y) ) / v , ans);
    }
    printf ("%.12f",ans);
    return 0;
}
