#include <bits/stdc++.h>
using namespace std;
int main () {
    int n,m; cin >> n >> m;
    int x,y,r;
    //graph[node][going_to].first = weight
    //graph[node][going_to].second = node_to_go_to
    vector<vector<pair<int,int>>> graph(n+1);
    for ( int i = 0; i < m ; i++ ) {
        cin >> x >> y >> r;
        // Adding from x to y and from y to x since it's an undirected graph
        graph[x].push_back({r*-1,y});
        graph[y].push_back({r*-1,x});
    }
    for ( int i = 1 ; i <= n ; i++ ) {
        cout << i << " : ";
        for ( auto k : graph[i] ) {
            cout << "(Node:" << k.second << ", w:" << -1*k.first << " )";
        }
        cout << endl;
    }
    
    cin >> x;
    int new_node = x;
    int w = 0;
    priority_queue<pair<int,int>> pos_edges;
    int overall_sum = 0;
    set<int> nodes_in_tree;
    while (nodes_in_tree.size() < n) {
        cout << "Connected nodes: " << nodes_in_tree.size() << endl;
        if ( !nodes_in_tree.count(new_node) ) {
            cout << "New node: " << new_node << endl;
            nodes_in_tree.insert(new_node);
            for ( auto edg : graph[new_node] ) {
                pos_edges.push(edg);
            }
            overall_sum += -1*w;
            cout << overall_sum << endl;
        }
        new_node = pos_edges.top().second;
        w = pos_edges.top().first;
        pos_edges.pop();
    }
    cout << overall_sum << endl;
    
    return 0;
}
