#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(NULL)
#define endl '\n'
using namespace std;

int dfs (int node, vector<vector<int>> &g, vector<bool> &vis) {
    if ( vis[node] ) return 0;
    vis[node] = true;
    int sum = 0;
    for ( auto cn : g[node] ) {
        sum += dfs(cn,g,vis);
    }
    return 1 + sum;
}

void solve() {
    long long n,m,clib,croad;
    cin >> n >> m >> clib >> croad;
    int x,y;
    if ( n == 1 ) { 
        cout << clib << endl;
        return;
    }
    vector<vector<int>> graph(n+1);
    vector<bool> visited(n+1,false);
    for ( int i = 0 ; i < m ; i++ ) {
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    long long total_roads = 0;
    long long aux = 0, components = 0;
    for ( int i = 1 ; i <= n ; i++ ) {
        if ( !visited[i] ) {
            aux = dfs(i,graph,visited) - 1;
            components++;
            total_roads += aux;
        }
    }
    long long ans = min(n*clib,(croad*total_roads)+(clib*components)) ;
    cout <<ans <<endl;
}

int main () {
    FAST_IO;
    int t; cin >> t;
    while ( t-- ) {
        solve();
    }
    return 0;
}
