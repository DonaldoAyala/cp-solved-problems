#include <bits/stdc++.h>

using namespace std;

unordered_map<string, long long> val;
unordered_map<string, bool> mem;

long long countSteps (string s, long long sol) {
    if (mem[s]) return val[s];
    if (sol == s.size() || sol == 0) {
        mem[s] = true;
        return val[s] = 0;
    }

    mem[s] = true;
    string a = s;

    if (s[sol - 1] == 'A') {
        s[sol - 1] == 'S';
        sol--;
    } else {
        s[sol - 1] == 'A';
        sol++;
    }

    return val[a] = countSteps(s, sol) + 1;
}

long long countWays (string s, int in, int sol) {
    if (mem[s]) return val[s];
    if (in == s.size()) return countSteps(s, s.size() - sol);

    long long sum = 0;

    for (int i = in; i < s.size() ; i++) {
        sum += countWays(s, i + 1, sol);
        s[i] = 'S';
        sum += countWays(s, i + 1, sol ++);
    }

    return sum;
}

int main () {
    int n; cin >> n;
    string s;
    for (int i = 0 ; i < n ; i++) {
        s += 'A';
    }

    cout << countWays(s, 0, 0) << endl;
    return 0;
}