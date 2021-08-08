#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(NULL)
#define endl '\n'
using namespace std;

class disjoint_set {
public:
    vector<int> parent;
    int no_nodes;
    disjoint_set(int n) {
        no_nodes = n;
        parent = vector<int>(n+1);
        //Each node is its own father
        for ( int i = 0 ; i <= n ; i++ ) {
            parent[i] = i;
        }
    }
    // Assign node_a to node_b's parent
    void unio(int node_a, int node_b) {
        parent[find(node_a)] = parent[find(node_b)];
    }
    // Finds the father of the group node_a belongs to
    int find(int node_a) {
        int aux = node_a;
        while ( aux != parent[aux] ) aux = parent[aux];
        return aux;
    }
};


int kruskals(int g_nodes, vector<int> g_from, vector<int> g_to, vector<int> g_weight) {
    int overall_sum = 0;
    priority_queue<pair<int,int>> weights;
    for ( int i = 0 ; i < g_weight.size() ; i++ ) {
        weights.push({g_weight[i]*-1,i});
    }
    disjoint_set connected_nodes(g_nodes);
    while (!weights.empty()) {
        int w = weights.top().first*-1, index = weights.top().second;
        weights.pop();
        if ( connected_nodes.find(g_from[index]) != connected_nodes.find(g_to[index]) ) {
            overall_sum += w;
            connected_nodes.unio(g_from[index],g_to[index]);
        }
    }
    return overall_sum;
}

int main () {
    FAST_IO;
    int nodes, edges; cin >> nodes >> edges;
    int u, v, w;
    vector<int> from(nodes), to(nodes), weight(nodes);
    for ( int i = 0 ; i < edges ; i++ ) {
        cin >> from[i] >> to[i] >> weight[i];
    }
    cout << kruskals(nodes,from,to,weight) << endl;
    return 0;
}
