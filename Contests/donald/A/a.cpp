#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(NULL)
#define endl '\n'
using namespace std;
int main () {
    FAST_IO;
    string s; cin >> s;
    for ( int i = 0 ; i < s.size() ; i++ ) {
    	if ( s[i] == 'O' || s[i] == 'o') {
    		s[i] = '0';
    	} else if ( s[i] == 'i' || s[i] == 'I') {
    		s[i] = '1';
    	} else if (s[i] == 'Z' || s[i] == 'z') {
    		s[i] = '2';
    	} else if (s[i] == 'E' || s[i] == 'e') {
    		s[i] = '3';
    	} else if (s[i] == 'A' || s[i] == 'a') {
    		s[i] = '4';
    	} else if (s[i] == 'S' || s[i] == 's') {
    		s[i] = '5';
    	} else if (s[i] == 'G' || s[i] == 'g') {
    		s[i] = '6';
    	} else if (s[i] == 'E' || s[i] == 'e') {
    		s[i] = '3';
    	} else if (s[i] == 'T' || s[i] == 't') {
    		s[i] = '7';
    	} else if (s[i] == 'B' || s[i] == 'b') {
    		s[i] = '8';
    	}
    }
    cout << s << endl;
    return 0;
}