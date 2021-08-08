#include <bits/stdc++.h>
#define lli long long

using namespace std;

vector<vector<vector<lli>>> ps;

int main () {
    int n, q, c; cin >> n >> q >> c;
    ps = vector<vector<vector<lli>>>(105, vector<vector<lli>>(105, vector<lli>(c + 5, -1)));
    int x, y, s;
    while ( n-- ) {
        cin >> x >> y >> s;
        ps[x][y][0] = s;
    }
    for ( int k = 0 ; k <= 100 ; k++ ) {
        for ( int j = 0 ; j <= c ; j++ ) {
            ps[0][k][j] = 0;
            ps[k][0][j] = 0;
        }
    }
    for ( int i = 1 ; i <= 100 ; i++ ) {
        for ( int k = 1 ; k <= 100 ; k++ ) {
            for ( int j = 1 ; j <= c ; j++ ) {
                int down = ps[i-1][k][j];
                int left = ps[i][k-1][j];
                int tb = ((ps[i][k][0] + j) % (c + 1));
                if ( ps[i][k][0] == -1 )
                    tb = 0;
                ps[i][k][j] = down + left + tb;
            }
        }
    } 
    for ( int j = 0 ; j <= c ; j++ ) {
        cout << "Moment: " << j << endl;
        for ( int i = 1 ; i <= 5 ; i++ ) {
            for ( int k = 1 ; k <= 5 ; k++ ) {
                cout << ps[i][k][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    int t, x1, y1, x2, y2;
    while ( q-- ) {
        cin >> t >> x1 >> y1 >> x2 >> y2;
        lli ans = ps[x2][y2][t] - ps[x1 - 1][y1 - 1][t];
        cout << ans << endl;
    }
    return 0;
}
