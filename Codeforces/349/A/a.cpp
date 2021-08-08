#include <bits/stdc++.h>

using namespace std;

bool change_of_100 ( int a, int b ) {
    if ( b > 0 && a > 0 ) return true;
    if ( a >= 3 ) return true;
    return false;
}

int main () {
    int n; cin >> n;

    vector<int> v(n);
    for ( auto &x : v ) cin >> x;
    int a = 0, b = 0, c = 0;
    int x;
    for ( int i = 0 ; i < n ; i++ ) {
        switch ( v[i] ) {
            case 25:
                a++;
            break;
            case 50:
                if ( a > 0 ) a--;
                else { cout << "NO\n"; return 0; }
                b++;
            break;
            case 100:
                if ( change_of_100(a,b) ) {
                    if ( b > 0 && a > 0 ) {b--; a--;}
                    else if ( a >= 3 ) { a-=3; }
                    else { cout << "NO\n"; return 0; }
                } else {
                    cout << "NO\n"; return 0;
                }
        }
    }
    cout << "YES\n";
    return 0;
}
