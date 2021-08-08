#include <bits/stdc++.h>

using namespace std;

int main () {
    int n, c; cin >> n >> c;
    vector<int> v(n);
    for ( auto &x : v ) cin >> x;
    int words = 1;
    for ( int i = 1 ; i < n ; i++ ) {
        if ( v[i] - v[i - 1] > c ) {
            words = 1;
        } else {
            words++;
        }
    }
    cout << words << endl;
    return 0;
}
