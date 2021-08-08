#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(NULL)
#define endl '\n'
using namespace std;

//abad
//adaa

void solve () { 
    string s,n; cin >> s >> n;
    if ( s.size() != n.size() ){ cout << "NO" << endl; return;}
    long long dif = 0;
    unordered_map <char,int> occs;
    unordered_map <char,int> occn;
    bool two_equal = false;
    for ( int i = 0 ; i < s.size() ; i++ ) {
        dif += !(s[i] == n[i]);
        occs[s[i]]++;
        occn[n[i]]++;
        if ( occs[s[i]] >= 2 ) two_equal = true;
    }
    if ( occs == occn ) {
        if ( dif == 2 || (dif == 0 && two_equal) ) {
            cout << "YES" << endl;
        } else {

        cout << "NO" << endl;
    }
}

int main () {
    FAST_IO;
    //int t; cin >> t;
    int t = 1;
    while ( t-- ) {
        solve();
    }
    return 0;
}
