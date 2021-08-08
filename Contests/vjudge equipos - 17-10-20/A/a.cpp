#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(NULL)
#define endl '\n'
using namespace std;

bool can_make ( vector<long long> &v ) {
    if ( v[2] < v[1] + v[0] ) return true;
}

bool make ( int a, int b, int c ) {
    //cout << a << " " << b << " " << c << endl;
    if (c < a + b && a < b + c && b < c + a) return true;
}

// 4 4 5 6
void solve( vector<long long> &v, int &count, int index, vector<long long> triplet, char last) {
    if ( triplet.size() >= 3 ) {
        if (can_make(triplet)) count++;
        return;
    }
    for ( int i = index ; i < v.size() ; i++ ) {
        // if ( i > 0 && v[i] == v[i-1] ) continue;
        if ( v[i] != last ) {
            triplet.push_back(v[i]);
            solve( v, count,  i + 1, triplet, v[i]);
            triplet.pop_back();
        }
    }
}

int main () {
    FAST_IO;
    int n; cin >> n;
    vector<long long> v(n);
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> v[i];
    }
    int counter = 0;
    vector<long long> tr;
    solve( v, counter, 0, tr, 'x' );
    set<vector<int>> triangles;
    //sort(v.begin(),v.end());
    for ( int i = 0 ; i < n ; i++ ) { // primer lado
        for ( int j = i + 1 ; j < n ; j++ ) { // Escogemos el segundo
            if ( v[j] == v[i]) continue;
            for ( int k = j + 1 ; k < n ; k ++ ) {
                if ( v[k] == v[j] || v[i] == v[k]) continue;
                    if (make(v[i],v[j],v[k])) triangles.insert({i,j,k});
            }
        }
    }
    cout << triangles.size() << endl;
    return 0;
}