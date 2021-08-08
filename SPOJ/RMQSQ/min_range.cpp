#include <bits/stdc++.h>
#define lli long long

using namespace std;

vector<lli> st;
int n;

void update ( int idx, int value, int v = 1, int l = 0, int r  = n - 1 ) {
    if ( l == r ) st[v] = value;
    else {
        int m = (r + l) >> 1; // (l + r) / 2
        if ( idx <= m )
            update(idx, value, v << 1, l, m);
        else
            update(idx, value, v << 1 | 1, m + 1, r);
        st[v] = min(st[v << 1], st[v << 1 | 1]);
    }
}

lli query ( int l, int r, int v = 1, int sl = 0, int sr = n - 1 ) {
    if ( sl > r || sr < l || sl > sr ) return 1e9 + 7; // neutro aditivo
    if ( sl >= l && sr <= r ) return st[v];
    int m = sr + sl >> 1;
    return min(query(l,r,v<<1,sl,m),query(l,r,(v<<1) | 1, m + 1, sr));
}

int main () {
    int t = 1, q, l, r;
    cin >> n;
    st.resize(4*n + 7);
    vector<lli> nums(n);
    for( auto &x : nums ) cin >> x;
    for ( int i = 0 ; i < n ; i++ ) {
        update(i, nums[i]);
    }
    cin >> q;
    while ( q-- ) {
        cin >> l >> r;
        cout << query(l, r) << endl;
    }
    return 0;
}
