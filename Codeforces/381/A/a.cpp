#include <bits/stdc++.h>

using namespace std;

int main () {
    int n; cin >> n;
    vector<int> v(n);
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> v[i];
    }
    long long ser = 0, other = 0;
    bool s = true;
    for ( int l = 0, r = n-1; l <= r ; ) {
        if ( s ) {
            if (v[l] > v[r]) {
                ser += v[l++];
            } else {
                ser += v[r--];
            }
        } else {
            if (v[l] > v[r]) {
                other += v[l++];
            } else {
                other += v[r--];
            }
        }
        s = not s;
    }
    cout << ser << " " << other << '\n';
    return 0;
}
