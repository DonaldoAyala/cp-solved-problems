#include <bits/stdc++.h>

using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    string s; cin >> s;
    unordered_map<char, int> m;

    for (int i = 0; i < n; i++) {
        m[s[i]]++;
    }

    for (char i = 'a'; i <= 'z'; i++) {
        for (int j = 0; j < m[i]; j++) {
            printf("%c", i);
        }
    }
    printf("\n");
}