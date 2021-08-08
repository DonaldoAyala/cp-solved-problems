#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file 
#include <ext/pb_ds/tree_policy.hpp> 
#include <functional> // for less 
using namespace __gnu_pbds;
using namespace std;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> rbtree;

int main(){
	int n,m;cin>>n>>m;
	int x;
	vector<int> v;
	rbtree t;
	while(m--){
		for(int i=0;i<n;i++){
			cin>>x;
			v.push_back(x);
			t.insert(x);
		}
	}
	return 0;
}
