#include <bits/stdc++.h>
using namespace std;

// Gauss formula
int sum (int x) {
    return (x*x + x) / 2 ;
}

int minimum (int n, vector<int> &c) {
    int i = 0; // index 
    int ma = 0;
    while( n && i < c.size()) {
        cout << n << " " << ma << endl;
        if ( n <= c[i] ) {
            ma += sum(c[i]) - sum(c[i] - n);
            n = 0;
        } else { // n > c[i]
            ma += sum(c[i]);
            n -= c[i];
        }
        i++;
    }
    return ma;
}

int main () {
    int n,m; cin >> n >> m;
    vector<int> cost(m);
    for ( int i = 0 ; i < m ; i++ ) {
        cin >> cost[i];
    }
    sort(cost.begin(),cost.end());
    cout << "Minimum: \n" << minimum(n,cost) << endl;
    return 0;
}
