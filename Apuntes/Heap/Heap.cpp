#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1002;

struct Heap {
	int last_node;
	vector<int> tree;
	Heap(): last_node(1) { tree.resize(MAXN); }

	bool
	isEmpty() {
		if(last_node == 1) return true;
		return false;
	}

	void
	push(int value) {
		tree[last_node++] = value;

		int temporal_node = last_node - 1;
		while(temporal_node > 1 && tree[temporal_node] > tree[temporal_node/2]) {			
				swap(tree[temporal_node],tree[temporal_node/2]);
				temporal_node /= 2;
		}
	}

	void Pop() {
		swap(tree(1), tree[last_node-1]);
		--last_node;


		while(temporal_node*2 < last_node) {
			if(tree[temporal_node]*2 > tree[temporal_node*2 + 1])
		}
	}


}