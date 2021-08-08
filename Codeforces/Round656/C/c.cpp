#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        int x = n - 1;
        while (x && a[x - 1] >= a[x])
            --x;
        while (x && a[x - 1] <= a[x])
            --x;
        std::cout << x << "\n";
    }
    return 0;
}