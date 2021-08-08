#include <bits/stdc++.h>

using namespace std;

int main () {
    int a, b, n;
    cin>>a>>b>>n;
    a *= 10;
    bool could = false;
    for ( int i = 0 ; i < 10 ; i++ ) {
        if ( (a + i) % b == 0 ) {
            a += i;
            could = true;
            break;
        }
    }
    if ( could ) {
        n--;
        cout << a;
        while ( n-- > 0 ) {
            cout << "0";
        }
        cout << "\n";
    } else {
        cout << "-1" << endl;
    }
    return 0;
}
