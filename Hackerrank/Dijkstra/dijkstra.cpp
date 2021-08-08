#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    // distance and node_id
    vector<vector<pair<int,int>>> graph(n+1);
    vector<int> vis(n+1,-1);
    int x,y,w;
    for ( int i = 0 ; i < m ; i++ ) {
        cin >> x >> y >> w;
        graph[x].push_back({w,y});
        graph[y].push_back({w,x});
    }
    int s; cin >> s;
    // distance and node_id
    priority_queue<pair<int,int>> pq;
    pq.push({0,s});
    vis[s] = 0;
    while ( !pq.empty() ) {
        int cw = pq.top().first;//current weight
        int cn = pq.top().second;//current node
        pq.pop();
        for ( auto v : graph[cn] ) {
            if ( vis[v.second] == -1 || vis[v.second] > vis[cn] + v.first ) {
                vis[v.second] = vis[cn] + v.first;
                pq.push({vis[v.second],v.second});
            }
        }
    }
    for ( int i = 1 ; i <= n ; i++ ) {
        if ( i  == s ) continue;
        cout << vis[i] << " ";
    }
    cout << '\n';
}

int main () {
    int t; cin >> t;
    while ( t-- ) {
        solve();
    }
    return 0;
}
