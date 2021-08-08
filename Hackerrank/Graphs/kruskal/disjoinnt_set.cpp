#include <bits/stdc++.h>
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
        return parent[aux];
    }
};

int main () {
    disjoint_set ds(5);
    ds.unio(1,2);
    ds.unio(3,2);
    ds.unio(4,5);
    ds.unio(4,1);
    for ( int i = 1 ; i <= ds.no_nodes ; i++ ) {
        cout << ds.find(i) << endl;
    }

    return 0;
}

