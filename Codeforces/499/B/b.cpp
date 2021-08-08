#include <bits/stdc++.h>

using namespace std;

int main () {
    int n, m;
    cin >> n >> m;
    unordered_map<string,string> t;
    string a,b;
    for ( int i = 0 ; i < m ; i++ ) {
        cin >> a >> b;
        t[a] = b;
    }
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> a;
        if ( a.size() <= t[a].size() ) {
            cout << a;
        } else {
            cout << t[a];
        }
        if ( i != n - 1 ) cout << " ";
        else cout << endl;
    }
    return 0;
}
