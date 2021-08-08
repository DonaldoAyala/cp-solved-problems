/*#include <ext/pb_ds/assoc_container.hpp> // Common file 
#include <ext/pb_ds/tree_policy.hpp> 
#include <functional> // for less 
#include <bits/stdc++.h>
using namespace __gnu_pbds; 
using namespace std; 

typedef tree<int, null_type, less<int>, ov_tree,tree_order_statistics_node_update> rbtree;

void printtree(rbtree t){
	for(int i=0;i<t.size();i++){
		cout<<*t.find_by_order(i)<<"-";
	}
	cout<<endl;
}

void solve(vector<int> arr, vector<int> queries) {
    int mi;
    int j;
    int i;
    for(auto d:queries){
        mi = 1<<30;
        rbtree h;
        for(j=0;j<d;j++){
            h.insert(arr[j]);
        }
        mi = mi < *h.find_by_order(d-1) ? mi : *h.find_by_order(d-1);
        printtree(h);
        for(long unsigned int i=d;i<arr.size();i++){
            h.erase(arr[i-d]);
            h.insert(arr[i]);
            mi = mi < *h.find_by_order(h.size()-1) ? mi : *h.find_by_order(h.size()-1);
            printtree(h);
        }
        cout<<"r"<<mi<<endl;
    }
}*/

#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the solve function below.
void solve(vector<int> arr, vector<int> queries) {
    int mi;
    int j;
    int i;
    int ma;
    for(auto d:queries){
        mi = 1<<30;
        ma = 0;
        priority_queue<int> h;
        for(j=0;j<d;j++){
            h.push(arr[j]);
        }
        mi = mi < h.top() ? mi : h.top();
        int startW = 0;
        for(long unsigned int i=d;i<arr.size();i++,startW++){
            if(h.top() == arr[startW])
                h.pop();
            h.push(arr[i]);
            mi = mi < h.top() ? mi : h.top();
        }
        cout<<mi<<endl;
    }
}


int main() {
	int n,k;cin>>n>>k;
	vector<int> v(n);
	vector<int> q(k);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	for(int i=0;i<k;i++){
		cin>>q[i];
	}
	solve(v,q);
	
}