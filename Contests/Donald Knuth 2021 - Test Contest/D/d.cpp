#include <bits/stdc++.h>

using namespace std;

int main () {
    string s; cin >> s;
    for (int i = 0; i < s.size() ; i++){
        if (s[i] == 'a' || s[i] == 'A') s[i] = '4';
        else if (s[i] == 'o' || s[i] == 'O') s[i] = '0';
        else if (s[i] == 'i' || s[i] == 'I') s[i] = '1';
        else if (s[i] == 'z' || s[i] == 'Z') s[i] = '2';
        else if (s[i] == 'e' || s[i] == 'E') s[i] = '3';
        else if (s[i] == 's' || s[i] == 'S') s[i] = '5';
        else if (s[i] == 'g' || s[i] == 'G') s[i] = '6';
        else if (s[i] == 't' || s[i] == 'T') s[i] = '7';
        else if (s[i] == 'b' || s[i] == 'B') s[i] = '8';
    }

    cout << s <<'\n';
    return 0;
}